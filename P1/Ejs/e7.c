/* 
Ejercicio 7. Un año es bisiesto si es divisible por 400, o bien si es divisible por 4 pero no por100. 
Escriba un programa que lea por teclado un año y devuelva si es bisiesto o no.



*/

#include <stdio.h>

void isBiciesto(int año);

int main() {
    int año;

    printf("\nIngrese el año para determinar si es bisiesto: ");
    scanf("%d",&año);
    isBiciesto(año);
}

void isBiciesto(int año)
{
    if ( (año % 400) == 0 ) printf("\nEl año ingresado es bisiesto.\n");
    else if ( ((año % 4) == 0) && ((año % 100) != 0) ) printf("\nEl año ingresado es bisiesto.\n");
    else printf("\nEl año ingresado NO es bisiesto.\n");
}