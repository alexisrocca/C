/* 
Escriba una función recursiva f que tome un entero n y devuelva el correspondiente valor
según la sucesión de Fibonacci.
*/

#include <stdio.h>

int f(int n);

int main()
{
    int n;

    printf("\nIngrese el entero: ");
    scanf("%d", &n);

    printf("\nEl valor correspondiente segun la sucesion de Fibonacci es: %d\n", f(n) );
}

int f(int n)
{
    if (n==0) return 0;
    else if (n==1) return 1;
    else if (n >= 2) return f(n -1) + f(n-2);
}