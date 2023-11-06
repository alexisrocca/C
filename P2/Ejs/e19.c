/* 
Ejercicio 19. Escriba una función que reciba una cadena de caracteres y un caracter y de-
vuelva la cantidad de apariciones del caracter en la cadena dada.
*/

#include <stdio.h>
#include <string.h>


int strVCS(char str[],char c);

int main () 
{
    char a[]="Quiero encontrar el caracter H en esta cadena de caracteres";
    char caracter = 'z';

    printf("\nEl caracter '%c' aparece %d veces\n",caracter,strVCS(a, caracter));
}

int strVCS(char str[],char c)
{
    int l = strlen(str);
    int apariciones = 0;

    for(int i=0;i<l;i++) {
        if (str[i] == c) apariciones ++;
    }
    return apariciones;
}