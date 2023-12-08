#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(int argc, char *argv[]) {
//     for (int i = 0; i < argc; i++) {
//         printf("argv[%d] = %s\n", i, argv[i]);
//     }
//     return 0;
// }

// int main(int argc, char *argv[]) {
    
//     char *nombre = argv[1];

//     printf("Nombre: %s\n",nombre);
//     //printf("cd Textos/%s && ls > ../../archivos.txt",nombre);

//     char command[50];
//     sprintf(command,"cd Textos/%s && ls > ../../archivos.txt",nombre);
//     system(command);

//     return 0;
// }


int main(int argc, char *argv[]) {
    char *nombre = argv[1];
    printf("Nombre: %s\n", nombre);

    // Calcular el tamaño necesario para el comando
    int size = strlen("cd Textos/") + strlen(nombre) + strlen(" && ls > ../../archivos.txt") + 1;

    // Asignar memoria dinámicamente
    char *command = (char*) malloc(size * sizeof(char));
    if (command == NULL) {
        printf("Error! memoria no asignada.\n");
        exit(0);
    }

    // Construir el comando
    strcpy(command, "cd Textos/");
    strcat(command, nombre);
    strcat(command, " && ls > ../../archivos.txt");

    system(command);

    // Liberar la memoria
    free(command);

    size = strlen("Textos/") + strlen(nombre) + 1;
    char *path = (char*) malloc(size * sizeof(char));
    strcpy(path,"Textos/");
    strcat(path,nombre);

    printf("Path: %s\n",path);

    int f = open("archivos.txt");
    f.close()



    return 0;
}

