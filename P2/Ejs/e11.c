/* 
Ejercicio 11. Escriba un programa que llene un arreglo con los primeros 50 múltiplos de 3 y
los muestre en pantalla en orden descendente.
*/

#include <stdio.h>


int main() 
{
    int array[50];

    for(int i=50;i>0;i--)
    {
        array[50-i]=i*3;
        printf("array[%d] = %d\n",50-i,array[50-i]);
    }
    
}