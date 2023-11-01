/* 
Ejercicio 1. Escriba un programa que pida por teclado el resultado obtenido al lanzar un
dado de seis caras y muestre por pantalla el número en letras de la cara opuesta al resultado
obtenido. En caso que el valor ingresado no sea válido para las caras de un dado, se debe
mostrar el mensaje: "Número incorrecto".
*/

#include <stdio.h>

int main()
{
    int cond;
    
    printf("\nIngrese un numero del 1 al 6: ");
    scanf("%d",&cond);

    switch(cond)
    {
        case 1:
            printf("Seis\n");
            break;
        case 2:
            printf("Cinco\n");
            break;
        case 3:
            printf("Cuatro\n");
            break;
        case 4:
            printf("Tres\n");
            break;
        case 5:
            printf("Dos\n");
            break;
        case 6:
            printf("Uno\n");
            break;
        default:
            printf("\nNumero Incorrecto\n");
        
    }
}