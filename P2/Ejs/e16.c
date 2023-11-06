/* 
Ejercicio 16. Escriba una función prodAlt que tome un arreglo de enteros junto con la longi-
tud del mismo y devuelva el producto de los elementos cuyos índices son pares.
*/

#include <stdio.h>


int prodAlt(int a[],int l);

int main() 
{
    int a[10]={2,2,2,2,2,2,2,2,2,2};

    printf("\nEl producto de los elementos del array es %d\n",prodAlt(a, 10));

}

int prodAlt(int a[],int l)
{
    int prod=1;
    for(int i=0;i<l;i+=2) prod *= a[i];
    return prod;
}