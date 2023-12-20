#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // ----------------------------------

    FILE *namesIn = fopen("nombres_in.txt", "r");
    FILE *namesOut = fopen("nombres_out.txt", "w+");

    int numLines = 0, cantPersonas = 0, k = 0, cantidadAfinidades;
    char names[25][25];
    char c;

    while (fgets(names[numLines], sizeof(names[numLines]), namesIn))
    {
        if (names[numLines][strlen(names[numLines])-1] == '\n')
            names[numLines][strlen(names[numLines])-1] = '\0';
        numLines++;
    }

    fclose(namesIn);
    cantPersonas = numLines;

    // ----------------------------------

    srand(time(0));

    k = rand() % cantPersonas + 1;
    cantidadAfinidades = (rand() % (cantPersonas * 2)) + 1;

    // ----------------------------------

    fprintf(namesOut, "%d\n", k);
    fprintf(namesOut, "Personas\n");
    for (int i = 0; i < numLines; i++)
        fprintf(namesOut, "%s\n", names[i]);
    fprintf(namesOut, "Afinidades\n");

    // ----------------------------------

    char *afinidades[25];
    char *tmp;
    int cant = 0;
    int size;

    for (int i = 0; i < cantPersonas; i++) {
        for (int j = i + 1; j < cantPersonas; j++) {

            size = strlen(names[j]) + strlen(", ") +strlen(names[i]);
            tmp = malloc(size * sizeof(char));
            if (rand() % 2)
            {
                strcpy(tmp, names[i]);
                strcat(tmp, ", ");
                strcat(tmp, names[j]);
            }
            else
            {
                strcpy(tmp, names[j]);
                strcat(tmp, ", ");
                strcat(tmp, names[i]);

            }
            afinidades[cant] = tmp;
            cant++;

            // free(tmp);
        }
    }
    // printf("%d\n%d",cant,cantidadAfinidades);
    for(int i = 0; i < cantidadAfinidades; i++)
         fprintf(namesOut,"%s\n",afinidades[i]);

    for(int i = 0; i < cant; i++)
        free(afinidades[i]);

    // ----------------------------------
    
    fclose(namesOut);

    system("python3 main.py");

    return 0;
}
