/* 
Ejercicio 10. Escriba un programa que llene un arreglo con los números pares que se en-
cuentren entre 100 y 200 y los muestre en pantalla en orden descendente.
*/

#include <stdio.h>


int main() 
{
    int array[50];

    for(int i=200-2;i>100;i-=2)
    {
        array[(200-2-i)/2]=i;
        printf("array[%d] = %d\n",(200-2-i)/2,array[(200-2-i)/2]);
    }
    
}