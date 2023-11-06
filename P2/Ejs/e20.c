/* 
Ejercicio 20. Escriba un programa que lea por teclado una cadena de caracteres y la imprima
por pantalla al revés.
*/

#include <stdio.h>
#include <string.h>


int main () 
{
    char a[50];
    printf("\nIngrese una cadena de caracteres sin espacios: ");
    scanf("%s",a);

    for(int i=strlen(a); i>=0 ;i--)
    {
        printf("%c",a[i]);
    }
    printf("\n");
}