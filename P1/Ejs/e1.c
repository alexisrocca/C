#include <stdio.h>

/* int main() {
    printf("Hola Mundo\n");
} */

//1. Entrada/Salida

//Ejercicio 1. ¿Cuál es la salida del siguiente programa?

int main () {
    int a, b, c, d=6, e;
    a = b = 3;
    c = a*b+d;
    e = (c + 5) / 4-3;
    e+=5;
    printf("Los resultados son %d y %d \n", c, e);
    return 0;
}

//OUT: Los resultados son 15 y 7 
