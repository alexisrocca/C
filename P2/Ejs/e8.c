/* 
Ejercicio 7. Mediante una única instrucción for y un printf genere la siguiente salida. Em-
plee 3 variables: una para la cadena de texto, un entero y un char:
b 5 T
bu 4 s
buc 3 R
bucl 2 q
bucle 1 P
*/

#include <stdio.h>


int main() 
{
    char str[]="bucle",letra='T';
    int entero=5;

    for (int i=0;i<5;i++)
    {
        if (i%2 == 0) letra='T';
        else letra+=32;

        str[6]=str[i+1];
        str[i+1]='\0';

        printf("%s %d %c\n",str,entero--,letra-i);

        str[i+1]=str[6];
        str[6]='\0';
    }
}
