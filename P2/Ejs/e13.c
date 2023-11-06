/* 
Ejercicio 13. Escriba un programa que lea un entero n entre 5 y 100 y luego solicite al usuario
el ingreso de n enteros, los cuales debe guardar en un arreglo. 

Finalmente, debe determinar si la suma de los elementos del arreglo es mayor a 30. 

Si el usuario ingresa un número n menor a 5 o mayor a 100 entonces se deberá imprimir 
un mensaje de Error y el ingreso del arreglo y el análisis de su contenido no se realizará.
*/

#include <stdio.h>


int main() 
{
    int a[100],num,suma=0;
    
    printf("\nIngrese un entero en el rango [5, 100]: ");
    scanf("%d",&num);
    
    if(num < 5 || num > 100){
        printf("Error\n");
        return 0;
    }

    for(int i = 0;i < num;i++)
    {
        printf("\nIngrese un numero: ");
        scanf("%d",&a[i]);
        suma+=a[i];
    }

    if (suma > 30) printf("\nLa suma de los numeros ingresados es MAYOR a 30 (%d)\n",suma);
    else printf("\nLa suma de los numeros ingresados es MENOR o IGUAL a 30 (%d)\n",suma);

}