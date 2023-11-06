/* 
Ejercicio 15. Escriba una función sumaArr que tome un arreglo de enteros junto con la longi-
tud del mismo y devuelva la suma de sus elementos.
*/

#include <stdio.h>


int sumaArr(int a[],int l);

int main() 
{
    int a[10]={1,1,1,1,1,1,1,1,1,1};

    printf("\nLa suma de los elementos del array es %d\n",sumaArr(a, 10));

}

int sumaArr(int a[],int l)
{
    int suma=0;
    for(int i=0;i<l;i++) suma += a[i];
    return suma;
}