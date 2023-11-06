/* 
Ejercicio 12. Escriba un programa que lea un arreglo a de 10 enteros y un entero n e imprima
el índice del arreglo a donde se encuentra n si n está presente en el arreglo, o -1 en caso
contrario.
*/

#include <stdio.h>


int main() 
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},num,encontrado=0;
    
    printf("\nIngrese un entero para buscarlo en el arreglo: ");
    scanf("%d",&num);
    
    int i=0;
    while((encontrado != 1) && (i<10)){
        if (a[i] == num) encontrado =1;
        i++;
    }
    
    if (encontrado) printf("\na[%d] = %d\n",i,num);
    else printf("\nNo se encontró el numero (-1)\n");

}