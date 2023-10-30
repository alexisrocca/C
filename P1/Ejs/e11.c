/* 
Ejercicio 11. Escriba un programa que pida dos números por teclado y muestre todos los
números que van desde el primero hasta el segundo. Se debe controlar que los valores sean
correctos, es decir, que el primero sea menor que el segundo. Si no lo son, se deben volver a
pedir hasta que lo sean.
*/

#include <stdio.h>


int main(){

    int num1, num2;

    printf("\n[!] El primer numero debe ser menor que el segundo\nIngrese dos numeros:\n");
    scanf("%d %d", &num1, &num2);

    while (num1 > num2){
        printf("\n[!] El primer numero debe ser menor que el segundo\nVuelva a ingresar el segundo numero: ");
        scanf("%d", &num2);
    }

    while(num1 <= num2){
        printf("%d\n",num1);
        num1 += 1;
    }
    
}

