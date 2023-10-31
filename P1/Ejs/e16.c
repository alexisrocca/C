/* 
Ejercicio 16. Tres números positivos pueden ser la medida de los lados de un triángulo si y
sólo si el mayor de ellos es menor que la suma de los otros dos. Escriba y pruebe una función
ladosTriangulo que devuelva 1 si los tres números que se le pasan verifican esta condición o
0 en caso contrario.
*/

#include <stdio.h>


int maximo(int num1, int num2);
int ladosTriangulo(int num1, int num2, int num3);

int main(){

    int num1, num2, num3;
    int mayor;

    printf("\nIngrese tres medidas de lados de un triangulo numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("\nSe verifica?: %d\n", ladosTriangulo(num1,num2,num3));
}

int maximo(int num1, int num2)
{
    if (num1 > num2) return num1;
    else return num2;
}

int ladosTriangulo(int num1, int num2, int num3)
{
    int mayor = maximo(maximo(num1,num2), num3);

    if (mayor < (num1 + num2 + num3 - mayor)) return 1;
    else return 0;

}