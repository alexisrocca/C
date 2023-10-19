#include <stdio.h>

/* int main() {
    printf("Hola Mundo\n");
} */

//1. Entrada/Salida

//Ejercicio 1. ¿Cuál es la salida del siguiente programa?

/* int main () {
    int a, b, c, d=6, e;
    a = b = 3;
    c = a*b+d;
    e = (c + 5) / 4-3;
    e+=5;
    printf("Los resultados son %d y %d \n", c, e);
    return 0;
} */

//OUT: Los resultados son 15 y 7 

//Ejercicio 2. ¿Cuál es la salida del siguiente programa?

/* int main () {
    int a, b, c, d=6, e;
    a = 3;
    b = a - d / 3;
    a *= b;
    c = a + d / a - 3 / a * b;
    e = c + 8 / 4-b;
    e+=5;
    printf("Los resultados son %d y %d \n", c, e);
    return 0;
}*/

//OUT: Los resultados son 4 y 10

//Ejercicio 3. Determine la salida del siguiente programa:

/* int main () {
    float x, y;
    printf ("Introduzca 2 números:\n");
    scanf (" %f %f", &x, &y);
    printf ("La suma de %f y %f vale %f\n", x, y, x+y);
    printf ("La suma de %4f y %4.2f vale %10.3f\n", x, y, x+y);
    printf ("La suma de %e y %e vale %e\n", x, y, x+y);
    return 0;
} */

// Introduzca 2 números:
// 5
// 2
// La suma de 5.000000 y 2.000000 vale 7.000000
// La suma de 5.000000 y 2.00 vale      7.000
// La suma de 5.000000e+00 y 2.000000e+00 vale 7.000000e+00

// 2. Selección

/* Ejercicio 4. Escriba una función que determine en qué estado está el agua en función de su
temperatura: si es negativa o 0 el estado será sólido, si positiva y menor que 100 será líquido y
si es mayor que 100 será gaseoso. El valor de la temperatura deberá ingresarse por pantalla. */

char * estadoAgua(float temp);

int main() {
    float temperatura;
    printf("Especifique la temperatura del agua: ");
    scanf("%f",&temperatura);
    printf("El estado es %s\n",estadoAgua(temperatura));
    return 0;
}

char * estadoAgua(float temp) {
    if(temp<=0){
        return "solido";
    }
    if(temp>0 && temp<100){
        return "líquido";
    }
    if(temp>100){
        return "gaseoso";
    }
}

// Especifique la temperatura del agua: 15.5
// El estado es líquido