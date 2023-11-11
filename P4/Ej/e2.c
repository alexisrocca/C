/* 
Ejercicio 2. Analice los programas dados a continuación. ¿Cuál es la salida por pantalla del
programa? ¿Hay errores en el manejo de memoria? ¿Cómo solucionaría estos errores?
*/

#include <stdio.h>
#include <stdlib.h>

// A
int main()
{
    char textoA[30] = "Agarrate Catalina";
    char textoB[30] = "El Cuarteto de Nos";
    char *p = textoA;
    char *q = textoB;
    char a;
    printf("textoA: %s\ntextoB: %s\n", textoA, textoB);
    while (*p++ = *q++)
        a = a;
    printf("while(*p++ = *q++);\n");
    printf("textoA: %s\ntextoB: %s\n", textoA, textoB);
    return 0;
}

/* Reemplaza, caracter por caracter, el textoA por el textoB, el error es que usa un arreglo[30] y hay espacio sin utilizar,
podria dejar el arreglo sin especificar los espacios, ya que le asigna una cadena de caracteres al momento de la declaracion */
//----------------------------

// B
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = array;
    printf("array[0]> %d; *ptr: %d\n", array[0], *ptr);
    printf("array[1]> %d; *(ptr +1): %d\n", array[1], *(ptr + 1));
    ptr++;
    printf("ptr++; *ptr: %d\n", *ptr);
    return 0;
}


// C
char *copiar_cadena(char *cad, int longitud)
{
    char *a = malloc(sizeof(char) * longitud);
    a = cad;
    return a;
}

int main()
{
    char a[10] = "hola";
    char *b = copiar_cadena(a, 10);
    printf("%s %s\n", a, b);
    b[0] = 's';
    printf(" %s %s\n", a, b);
    return 0;
}