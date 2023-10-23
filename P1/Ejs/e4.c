// 2. Selección

/* Ejercicio 4. Escriba una función que determine en qué estado está el agua en función de su
temperatura: si es negativa o 0 el estado será sólido, si positiva y menor que 100 será líquido y
si es mayor que 100 será gaseoso. El valor de la temperatura deberá ingresarse por pantalla. */

#include <stdio.h>

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

