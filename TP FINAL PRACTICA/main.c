#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 255

char convertirAMinusculas(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + ('a' - 'A');
    }
    return c;
}

int main(int argc, char *argv[])
{
    FILE *file;
    FILE *childFile;
    FILE *outFile;
    char *nombre = argv[1];
    char buff0[255];
    char buff1[255];
    char c;

    printf("\nNombre: %s\n", nombre);

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

    // Creo la ubicacion en memoria del string PATH
    size = strlen("Textos/") + strlen(nombre) + strlen("/") + 1;
    char *path = (char *)malloc(size * sizeof(char));

    // Construyo el string PATH
    strcpy(path, "Textos/");
    strcat(path, nombre);
    strcat(path, "/");

    printf("Path: %s\n", path);

    file = fopen("archivos.txt", "r");

    printf("\n--------------------------------------\n");

    // Creo el file PATH de Salida

    // size = strlen("Salida/") + strlen(nombre) + strlen("/") + strlen(nombre) + strlen(".txt") + 1;
    // char *outFilePath = (char *)malloc(size * sizeof(char));
    // strcpy(outFilePath, "Salida/");
    // strcat(outFilePath, nombre);
    // strcat(outFilePath, "/");
    // strcat(outFilePath, nombre);
    // strcat(outFilePath, ".txt");
    // printf("%s", outFilePath);
    // outFile = fopen(outFilePath, "w+");

    while (fgets(buff0, MAX_LINE_LENGTH, file) != NULL)
    {
        // strcspn cuenta la cantidad de caracteres en el string antes de la aparicion de \n,
        // por lo que luego lo utilizo para calcular el index de buff0 en el que se encuentra el \n
        // y lo igualo a 0 para eliminarla, ya que el fgets la incluye
        buff0[strcspn(buff0, "\n")] = 0;
        size = strlen(path) + strlen(buff0) + 1;

        char *childFileName = (char *)malloc(size * sizeof(char));

        strcpy(childFileName, path);
        strcat(childFileName, buff0);
        printf("[!] %s\n", childFileName);
        childFile = fopen(childFileName, "r");
        if (childFile == NULL) {
            perror("Error al abrir el archivo hijo");
            free(childFileName);
            continue; // Saltar al siguiente archivo si no se pudo abrir
        }

        printf("--------------------------------------\n");

        int i = 0;
        int newline;

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
                buff1[i] = '\0';
                printf("%s", buff1);
                // fprintf(outFile,"%s",buff1);
                i = 0;
            }

            if (c != ',')
            {
                c = convertirAMinusculas(c);
                buff1[i++] = c;
            }
        }

        printf("\n--------------------------------------\n");
        fclose(childFile);
        free(childFileName);
    }
    // free(outFilePath);
    free(path);

    fclose(file);
    fclose(outFile);

    return 0;
}
