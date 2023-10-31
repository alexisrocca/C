/* 
Ejercicio 14. Los pacientes con síntomas de una cierta enfermedad son ingresados en el
hospital si tienen un valor superior a 0,6 en la medición de un determinado índice, y son opera-
dos si el valor es superior a 0,9. Escriba un programa en C que lea desde el teclado el número
de pacientes a analizar seguido de la edad y el índice de cada paciente. El programa debe
calcular y mostrar la edad media de los pacientes analizados, la edad media de los ingresados
y la edad media de los operados.
*/

#include <stdio.h>


int main(){

    int cant_pacientes;
    int  edad, edad_media_total, cant_pacientes_ingresados = 0, cant_pacientes_operados = 0, edad_media_ingresados = 0, edad_media_operados = 0;
    float indice;
    printf("Ingrese la cantidad de pacientes a computar: ");
    scanf("%d", &cant_pacientes);

    while (cant_pacientes != 0){

        printf("Ingrese el indice y la edad del paciente: ");
        scanf("%f %d", &indice, &edad);

        if ((indice < 0.9) && (indice > 0.6))
        {
            printf("ingresa a la guardia\n");
            cant_pacientes_ingresados++;
            cant_pacientes_ingresados += edad;
            edad_media_total += edad;
        }
        else if (indice > 0.9)
        {
            printf("el paciente debe ser operado\n");
            cant_pacientes_operados++;
            edad_media_operados += edad;
            edad_media_total += edad;
        }
        else
        {
            printf("el paciente no es ingresado\n");
            edad_media_total += edad;
        }
        cant_pacientes--;
    }
    edad_media_ingresados = edad_media_ingresados / cant_pacientes_ingresados;
    edad_media_operados = edad_media_operados / cant_pacientes_operados;
    edad_media_total = edad_media_total / cant_pacientes_ingresados + cant_pacientes_operados;
    
    printf("la edad media es: %d\n", edad_media_total);
    printf("la edad media de los ingresados es: %d\n", edad_media_ingresados);
    printf("la edad media de los operados es: %d\n", edad_media_operados);

    return 0;
}

 