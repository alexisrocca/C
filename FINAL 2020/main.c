/* 

Falta modularizar el codigo.
Faltan los asserts
Falta los comentarios

 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>

#define MATERIAS_FILE_LIST "materias.txt"
#define FILE_OUT "output.txt"
#define MAX_CHARS_IN_LINE 50
#define MAX_LINES 50

char *convertirStrMinuscula(char *str)
{
    for (int i = 0; i < strlen(str); i++) // Recorro el string
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // Compruebo si el caracter esta dentro del rango de las mayusculas
        {
            str[i] = str[i] + ('a' - 'A'); // Le sumo al caracter lo necesario para pasarlo a  minuscula
        }
    }
}

int main(int argc, char *argv[])
{
    FILE *materiasFile = fopen(MATERIAS_FILE_LIST, "r"); // Abro el archivo que contiene las materias
    FILE *fileOut = fopen(FILE_OUT, "w+");               // Abro y sobreescribo el archivo output

    char lineas[MAX_LINES][MAX_CHARS_IN_LINE];
    char materia[MAX_LINES][MAX_CHARS_IN_LINE];
    int numLines = 0, len, repetido;
    int cantDias, diaNum, horaInicio, horaFin;
    char *aula;

    srand(time(0));

    while (fgets(lineas[numLines], sizeof(lineas[numLines]), materiasFile))
    {
        strcpy(materia[numLines], lineas[numLines]);
        repetido = 0;
        if (numLines == 0)
            aula = lineas[0];

        convertirStrMinuscula(materia[numLines]);

        for (int i = 0; i < numLines; i++)
        {
            if (strcmp(materia[i], materia[numLines]) == 0 && repetido == 0) // Comparo la linea actual con las que ya se han leido
            {
                len = strlen(materia[numLines]);

                printf(
                    "\n[!] La linea '%.*s' se repite en el archivo, solo se tomara una vez.\n",
                    len - 1,
                    materia[numLines]);
                // Imprimo la linea que se repite sacando el \n del final del string
                repetido = 1;
            }
        }

        if (numLines == 0)
            fprintf(fileOut, "%s", lineas[numLines]);

        if (repetido == 0 && numLines != 0)
        {
            fprintf(fileOut, "%s", lineas[numLines]);

            cantDias = rand() % 3 + 1;

            printf("\n- %s", lineas[numLines]);
            diaNum = rand() % 5;

            for (int i = 0; i < cantDias; i++)
            {
                switch (diaNum)
                {
                case 0:
                    printf("Lunes ");
                    fprintf(fileOut, "Lunes ");
                    break;

                case 1:
                    printf("Martes ");
                    fprintf(fileOut, "Martes ");
                    break;

                case 2:
                    printf("Miercoles ");
                    fprintf(fileOut, "Miercoles ");
                    break;

                case 3:
                    printf("Jueves ");
                    fprintf(fileOut, "Jueves ");
                    break;

                case 4:
                    printf("Viernes ");
                    fprintf(fileOut, "Viernes ");
                    break;
                }
                if (diaNum == 0)
                    diaNum++;
                else
                    diaNum--;

                horaInicio = rand() % 8 + 11;

                if ((horaInicio + 4) >= 19)
                    horaFin = horaInicio - 4;
                else
                    horaFin = horaInicio + 4;

                printf("%d a %d\n", horaInicio, horaFin);
                fprintf(fileOut, "%d a %d\n", horaInicio, horaFin);
            }
        }
        numLines++;
    }

    printf("\nEl aula es: %s", aula);
    printf("\n");
    fclose(materiasFile);
    fclose(fileOut);

    return 0;
}