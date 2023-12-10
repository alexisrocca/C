#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 255
#define PYTHON_FILE_NAME "main.py"

char convertirAMinusculas(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + ('a' - 'A');
    }
    return c;
}

void listarArchivos(char *nombre)
{
    // Calcular el tamaño necesario para el comando
    int size = strlen("cd Textos/") + strlen(nombre) + strlen(" && ls > ../../archivos.txt") + 1;

    // Asignar memoria dinámicamente
    char *command = (char *)malloc(size * sizeof(char));

    // Construir el comando
    strcpy(command, "cd Textos/");
    strcat(command, nombre);
    strcat(command, " && ls > ../../archivos.txt");
    system(command);

    // Liberar la memoria
    free(command);
}

char *crearPath(char *prefijo, char *nombre, char *sufijo)
{

    // Creo la ubicacion en memoria del string PATH
    int size = strlen(prefijo) + strlen(nombre) + strlen(sufijo) + 1;
    char *path = (char *)malloc(size * sizeof(char));

    // Construyo el string PATH
    strcpy(path, prefijo);
    strcat(path, nombre);
    strcat(path, sufijo);
    printf("--------------------------------------");
    printf("\n[!] %s Path: %s\n", prefijo, path);

    return path;
}

void procesarArchivo(char *childFilePath, char *outFilePath)
{
    FILE *childFile, *outFile;
    int i = 0, newline;
    char c, buff[MAX_LINE_LENGTH];

    childFile = fopen(childFilePath, "r");
    outFile = fopen(outFilePath, "w+");

    while ((c = fgetc(childFile)) != EOF)
    {
        if (c == '\n' && (newline != 1))
        {
            c = ' ';
        }
        newline = 0;
        if (c == '.')
        {
            newline = 1;
            c = ' ';
            buff[i] = '\0';
            printf("%s", buff);
            fprintf(outFile, "%s", buff);
            i = 0;
        }

        if (c != ',')
        {
            c = convertirAMinusculas(c);
            buff[i++] = c;
        }
    }
    fprintf(outFile, "\n");

    fclose(childFile);
    fclose(outFile);
}

void procesarArchivos(char *path, FILE *filesList, char *nombre)
{
    char buff[MAX_LINE_LENGTH], c;
    char *childFilePath, *outFilePath;

    outFilePath = crearPath("Entradas/", nombre, ".txt");

    while (fgets(buff, MAX_LINE_LENGTH, filesList) != NULL)
    {
        // strcspn cuenta la cantidad de caracteres en el string antes de la aparicion de \n,
        // por lo que luego lo utilizo para calcular el index de buff0 en el que se encuentra el \n
        // y lo igualo a 0 para eliminarla, ya que el fgets la incluye
        buff[strcspn(buff, "\n")] = 0;

        childFilePath = crearPath(path, buff, "");

        printf("\n");
        procesarArchivo(childFilePath, outFilePath);
        printf("\n\n");

        free(childFilePath);
    }
    free(outFilePath);
}

void ejecutarProgramaPython(char *nombre)
{
    int size = strlen("python3 ") + strlen(PYTHON_FILE_NAME) + strlen(" ") + strlen(nombre) + 1;
    char *command = (char *)malloc(size * sizeof(char));
    strcpy(command, "python3 ");
    strcat(command, PYTHON_FILE_NAME);
    strcat(command, " ");
    strcat(command, nombre);

    system(command);
    free(command);
}

int main(int argc, char *argv[])
{
    FILE *filesList;
    char *name = argv[1], *filesListPath;

    printf("\nNombre: %s\n", name);

    listarArchivos(name);

    filesListPath = crearPath("Textos/", name, "/");

    filesList = fopen("archivos.txt", "r");

    procesarArchivos(filesListPath, filesList, name);

    free(filesListPath);
    fclose(filesList);

    ejecutarProgramaPython(name);

    return 0;
}
