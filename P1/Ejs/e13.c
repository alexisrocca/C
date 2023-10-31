/* 
Ejercicio 13. Escriba un programa que lea un número por teclado y muestre el factorial del
mismo. Sugerencia: definir la variable que represente el factorial como double.
*/

#include <stdio.h>


int main(){
    int num;
    double factorial = 1;

    printf("Ingrese el numero que quiera saber su factorial\n");
    scanf("%d", &num);

    while (num != 0)
    {
        factorial *= num;
        num--;
    }

    printf("Su factorial es: %lf", factorial);
    
    return 0;
} 





 