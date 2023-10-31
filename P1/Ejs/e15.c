/* 
Ejercicio 15. Escriba una función maximo que tome como parámetros dos enteros y devuelva
el máximo entre ellos. Utilice esta función para calcular el máximo entre 4 enteros que se le
soliciten al usuario por teclado.
*/

#include <stdio.h>


int maximo(int num1, int num2);

int main(){

    int num1, num2, num3, num4;
    int res;

    printf("\nIngrese cuatro numeros:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printf("\nEl mayor numero entre los ingresados es %d\n", maximo( maximo( maximo( num1,num2),num3),num4) );
}

int maximo(int num1, int num2)
{
    if (num1 > num2) return num1;
    else return num2;
}