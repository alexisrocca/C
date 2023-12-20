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

void *convertirStrMinuscula(char *str)
{
    for (int i = 0; i < strlen(str); i++) // Recorro el string
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // Compruebo si el caracter esta dentro del rango de las mayusculas
        {
            str[i] = str[i] + ('a' - 'A'); // Le sumo al caracter lo necesario para pasarlo a  minuscula
        }
    }
}

char *crearLineaActual(char *currentFileLine)
{
    int size = strlen(currentFileLine);
    char *currentLine = (char *)malloc(size * sizeof(char));
    strcpy(currentLine, currentFileLine);
    return currentLine;
}

int comprobarLineaRepetida(char fileLine[MAX_LINES][MAX_CHARS_IN_LINE], int numLines, char *currentLine)
{
    int len, repetido = 0;
    convertirStrMinuscula(fileLine[numLines]);

    for (int i = 0; i < numLines; i++)
    {
        if (strcmp(fileLine[i], fileLine[numLines]) == 0 && repetido == 0) // Comparo la linea actual con las que ya se han leido
        {
            len = strlen(fileLine[numLines]);

            printf(
                "\n[!] La linea '%.*s' se repite en el archivo, solo se tomara una vez.\n",
                len - 1,
                currentLine);
            // Imprimo la linea que se repite sacando el \n del final del string
            repetido = 1;
        }
    }
    return repetido;
}

int main(int argc, char *argv[])
{
    FILE *materiasFile = fopen(MATERIAS_FILE_LIST, "r"); // Abro el archivo que contiene las materias
    FILE *fileOut = fopen(FILE_OUT, "w+");               // Abro y sobreescribo el archivo output

    char fileLine[MAX_LINES][MAX_CHARS_IN_LINE];
    int numLines = 0, repetido;
    int diasSemana, dia, horaInicio, horaFin, horasDictado, temp, size;
    char *aula, *currentLine;

    srand(time(0));
    
    while (fgets(fileLine[numLines], sizeof(fileLine[numLines]), materiasFile))
    {
        repetido = 0;

        if (numLines == 0) aula = fileLine[0];

        currentLine = crearLineaActual(fileLine[numLines]);
        repetido = comprobarLineaRepetida(fileLine, numLines, currentLine);

        if (numLines == 0)
            fprintf(fileOut, "%s", currentLine);

        if (repetido == 0 && numLines != 0)
        {
            fprintf(fileOut, "%s", currentLine);

            diasSemana = rand() % 3 + 1;

            printf("\n- %s", currentLine);
            dia = rand() % 5;

            for (int i = 0; i < diasSemana; i++)
            {
                switch (dia)
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
                if (dia == 0)  dia++;
                else dia--;

                horaInicio = rand() % 8 + 11;
                horasDictado = rand() % 4 + 1;

                if ((horaInicio + horasDictado) > 19) horaFin = horaInicio - horasDictado;
                else horaFin = horaInicio + horasDictado;

                if (horaInicio > horaFin)
                {
                    temp = horaInicio;
                    horaInicio = horaFin;
                    horaFin = temp;
                    temp = 0;
                }

                printf("%d a %d\n", horaInicio, horaFin);
                fprintf(fileOut, "%d a %d\n", horaInicio, horaFin);
            }
        }
        numLines++;
        free(currentLine);
    }

    printf("\nEl aula es: %s", aula);
    printf("\n");
    fclose(materiasFile);
    fclose(fileOut);

    return 0;
}