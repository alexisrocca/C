/* 
Ejercicio 18. Escriba una función que reciba una cadena de caracteres y un caracter y de-
vuelva 0 si el caracter esta presente en la cadena, o 1 en caso contrario.
*/

#include <stdio.h>
#include <string.h>


int strIN(char str[],char c);

int main () 
{
    char a[]="Quiero encontrar el caracter H en esta cadena de caracteres";

    printf("\nLa funcion strIN devolvio el valor %d\n",strIN(a, 'H'));
}

int strIN(char str[],char c)
{
    int l = strlen(str),i=0;
    char caracterNoEncontrado=1;

    while((caracterNoEncontrado != 0) && (i<l)) {
        if (str[i] == c) caracterNoEncontrado = 0;
        i++;
    }
    return caracterNoEncontrado;
}