/* 
Ejercicio 4. Una terna de números naturales (a, b, c) es una terna pitagórica si a2+ b2= c2.
Escriba un programa que imprima todas las ternas pitagóricas con a ≤20 y b ≤30.
*/

#include <stdio.h>
#include <math.h>

int main()
{

    for (int a = 0 ; a < 21 ; a++){
        for (int b = 0 ; b < 31 ; b++){

            printf("\n%d*%d + %d*%d = %d + %d = %d ",a,a,b,b,(a*a),(b*b),(a*a+b*b));

        }
    }

}