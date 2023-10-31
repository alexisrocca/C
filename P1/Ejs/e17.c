/* 
Ejercicio 17. Defina una función esRectangulo que tome tres enteros y devuelva 1 si los
números que se le pasan pueden ser los lados de un triángulo rectángulo, o 0 en caso contrario.

Sugerencia: una manera sería verificar si el cuadrado del mayor es igual la suma de los
cuadrados de los otros dos. Sin embargo, existe otra manera utilizando sólo una vez una fun-
ción max3 que devuelve el máximo entre tres enteros dados. Defina ambas funciones y pruebe
esRectangulo con las entradas (3, 5, 4), (5, 13, 12) y (7, 3, 5).
*/

#include <stdio.h>


int maximo(int num1, int num2);
int max3(int num1, int num2, int num3);
int esRectangulo(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;

    printf("\nIngrese tres medidas de lados de un triangulo rectangulo :\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("\nSe verifica?: %d\n", esRectangulo(num1,num2,num3) );
}

int maximo(int num1, int num2)
{
    if (num1 > num2) return num1;
    else return num2;
}

int max3(int num1, int num2, int num3)
{
    int max;
    if (num1 > num2) max = num1;
    else max = num2;

    if (max > num3) return max;
    else return num3;
}

int esRectangulo(int num1, int num2, int num3)
{
    int mayor = max3(num1,num2,num3);

    if ((mayor*mayor) == ((num1*num1) + (num2*num2) + (num3*num3) - (mayor*mayor))) return 1;
    else return 0;

}