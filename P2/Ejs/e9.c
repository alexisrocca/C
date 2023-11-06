/* 
Ejercicio 9. Escriba un programa que llene un arreglo con los primeros 100 números enteros
a partir del 0 y los muestre en pantalla en orden ascendente.
*/

#include <stdio.h>


int main() 
{
    int array[100];

    for(int i=0;i<100;i++)
    {
        array[i]=i+1;
        printf("%d\n",array[i]);
    }
    
}