/* 
Ejercicio 14. Escriba un programa que lea enteros hasta que se ingrese un número negativo
y posteriormente imprima qué valor entre 0 y 99 se ingresó más veces.
*/

#include <stdio.h>


int main() 
{
    int a[100],num=0,mayorAp=0;
    
    printf("\nIngrese numeros, para terminar ingrese un numero negativo: \n");
    
    for(int i = 0;i<100;i++) a[i]=0;

    do
    {
        scanf("%d",&num);
        a[num]+=1;
        
    } while(num > 0);

    for(int i = 0;i < 100;i++)
    {
        if (a[i]>mayorAp) 
        {
            mayorAp = a[i];
            num = i;
        }

    }

    printf("\nEl numero con mayor apariciones es %d\n",num);

}