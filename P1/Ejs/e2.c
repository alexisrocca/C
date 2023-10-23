//Ejercicio 2. ¿Cuál es la salida del siguiente programa?

#include <stdio.h>

int main () {
    int a, b, c, d=6, e;
    a = 3;
    b = a - d / 3;
    a *= b;
    c = a + d / a - 3 / a * b;
    e = c + 8 / 4-b;
    e+=5;
    printf("Los resultados son %d y %d \n", c, e);
    return 0;
}

//OUT: Los resultados son 4 y 10
