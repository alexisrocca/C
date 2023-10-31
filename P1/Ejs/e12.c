/* 
Ejercicio 12. Escriba un programa que, dado un número ingresado por teclado, determine si
el mismo es primo o no, mostrándolo por pantalla.
*/

#include <stdio.h>


int main() {

    int num,num_aux,cantDivisores = 1;

    printf("Ingrese un num: ");
    scanf("%d",&num);
    num_aux = num/2;
    while ((cantDivisores < 3) && (num_aux >= 1))
    {
        if ((num % num_aux) == 0) cantDivisores++;
        num_aux--;
    }
    
    if (cantDivisores < 3) printf("\nEl numero ingresado es primo\n");
    else printf("\nEl numero ingresado NO es primo\n\n");

}


