/* 
Ejercicio 8. Escriba un programa que lea un valor positivo y haga la siguiente secuencia: si
el número es par, debe dividirlo entre 2; si es impar, debe multiplicarlo por 3 y sumarle 1. La
secuencia debe repetirse hasta que el valor sea 1, imprimiendo cada valor. También se deberá
imprimir cuántas operaciones de estas fueron realizadas. Si el valor ingresado es menor que
1, imprima un mensaje que contenga la palabra Error. Un ejemplo de la salida del programa
podría ser el siguiente:
El valor inicial es 9
El siguiente valor es 28
El siguiente valor es 14
El siguiente valor es 7
El siguiente valor es 22
El siguiente valor es 11
El siguiente valor es 34
El siguiente valor es 17
El siguiente valor es 52
El siguiente valor es 26
El siguiente valor es 13
El siguiente valor es 40
El siguiente valor es 20
El siguiente valor es 10
El siguiente valor es 5
El siguiente valor es 16
El siguiente valor es 8
El siguiente valor es 4
El siguiente valor es 2
Valor final 1, número de pasos 19.
*/

#include <stdio.h>


int main() 
{
    int val,pasos=0;
    printf("\nIngrese un valor positivo: ");
    scanf("%d",&val);

    if (val < 1) {
        printf("\nError, el numero no es positivo\n");
        return 0;
    }
    printf("\nEl valor inicial es %d",val);

    while(val > 1)
    {
        if( val % 2 == 0 ) val/=2;
        else {
            val*=3;
            val+=1;
        }
        pasos+=1;
        if (val != 1) printf("\nEl siguiente valor es %d",val);
    }

    printf("\nValor final %d, numero de pasos %d\n",val,pasos);
    
}