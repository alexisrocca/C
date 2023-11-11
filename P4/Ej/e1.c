/*
Ejercicio 1. ¿Cuál es la salida de los siguientes programas con punteros? Explique su res-
puesta.
*/

#include <stdio.h>
#include <stdlib.h>


// A
int main()
{
    int *punt;
    int x = 7, y = 5;
    punt = &x;
    *punt = 4;
    printf("%d %d", x, y);
    return 0;
}

/* Imprime 4, 5 */
// --------------------------------
// B
int main()
{
    int *punt;
    int x = 7, y = 5;
    punt = &x;
    x = 4;
    punt = &y;
    printf(" %d %d", *punt, x);
    return 0;
}

/* Imprime 5, 4 */
// --------------------------------

// C
int main()
{
    int *punt, i;
    int x[] = {1, 2, 3, 4, 5};
    punt = x;
    *punt = 9;
    for (i = 0; i < 5; i++)
        printf(" %d, ", x[i]);
    return 0;
}

/* 9, 2, 3, 4, 5 */
// --------------------------------

// D
int main()
{
    int *punt, i;
    int x[] = {1, 2, 3, 4, 5};
    punt = x;
    *(punt + 2) = 9;
    *(x + 3) = 7;
    punt[1] = 11;
    for (i = 0; i < 5; i++)
        printf(" %d, ", *(punt + i));
    return 0;
}

/* 1, 11, 9, 7, 5 */
// --------------------------------

// E
int main()
{
    int *punt, i;
    int x[5] = {1, 2, 3, 4, 5};
    punt = &x[0] + 3;
    *(punt - 2) = 9;
    punt--;
    *(punt) = 7;
    punt[1] = 11;
    punt = x;
    for (i = 0; i < 5; i++)
        printf(" %d, ", punt[i]);
    return 0;
}

/* 1, 9, 7, 11, 5 */
// --------------------------------

// F
int main()
{
    int v[4] = {2, 4, 5, 7}, a, *p;
    p = v + 2;
    p--;
    a = *p + *(p + 1) + *(v + 1) + p[2];
    printf(" %d", a);
    return 0;
}

/* 4 + 5 + 4 + 7 = 20 */
// --------------------------------

// G
void aumentar(int *x, int *y, int z)
{
    *x = *x + 2;
    *y = *y + 5;
    z = z + 4;
}

int main()
{
    int x, y, z;
    x = 3;
    y = 10;
    z = 15;
    aumentar(&x, &y, z);
    printf(" %d %d %d", x, y, z);
    return 0;
}

/* 5 15 15 */
// --------------------------------

// H
void ingreseCadena(char *c)
{
    fgets(c, 10, stdin);
}

int main()
{
    char *cadena = malloc(sizeof(char) * 10); // 10
    fgets(cadena, 10, stdin);
    printf("%s\n", cadena);
    ingreseCadena(cadena);
    printf("%s", cadena);
    free(cadena);
    return 0;
}

/*  */
// --------------------------------

// I
int *direccion_local(int x)
{
    return &x;
}

int main()
{
    int *ptr = NULL;
    ptr = direccion_local(2);
    printf(" %d\n", *ptr);
    return 0;
}

/* 
El programa no compila debido a que la funcion *direccion_local devuelve una 
direccion local que sera eliminada luego de la ejecucion de la funcion 
*/
// --------------------------------