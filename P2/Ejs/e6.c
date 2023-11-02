/* 
Ejercicio 6. Escriba un programa que tenga un número secreto entre 0 y 500, el cual estará
fijo en el código (use #define para esto). El usuario deberá, mediante el ingreso de números,
adivinar dicho valor. En cada intento el programa debe responder el número es mayor o el
número es menor, según corresponda. El usuario dispondrá, como máximo, de 15 intentos.
*/

#include <stdio.h>
#define numSecreto 219

int main() 
{
    int num, intentos = 0;

    printf ("Adivine el numero secreto en el rango [0,500]\nTiene 15 intentos:");

    while (num != numSecreto && intentos < 15)
    {
        scanf("%d", &num);
        if (num<numSecreto) printf("El numero secreto es MAYOR al ingresado.\nVuelva a intentarlo.\n");
        else if (num>numSecreto) printf("El numero secreto es MENOR al ingresado.\nVuelva a intentarlo.\n");
        else printf("Encontraste el numero! 219!\n");
        intentos++;
    }

    if (intentos == 15) printf("Perdiste!, llegaste a los 15 intentos\n");

    return 0;
}

/* 

Este codigo imprime cierta cantidad de arrobas seguidas (dependiendo de X) y lo repite 
en Y cantidad de filas

*/