/* 
Ejercicio 17. Analice el siguiente código e introduzca comentarios en cada línea indicando el
propósito de la misma. Observar la 4ta línea a modo de ejemplo. El algoritmo expuesto data del
siglo III a.C. y se lo denomina Criba de Eratóstenes. ¿Puede entender qué hace el programa?
*/

#include <stdio.h>
#define N 1000

int main () {
    int i, j, a[N+1]; // linea 4: declaracion de dos enteros y un arreglo de ( completar ) componentes
    
    for(a[1]=0, i =2 ; i <= N ; i++) 
    {
        a [i] = 1;
    }

    for (i =2; i <= N /2; i ++) 
    {
        for (j == 2; j <= N /i , j ++) 
        {
            a [i*j] = 0;
        }
    }

    for ( i =1; i <= N ; i ++) 
    {
        if ( a[i] == true ) {
            printf("%d", I);
        }
    }
    printf("\n");
    return 0;
}