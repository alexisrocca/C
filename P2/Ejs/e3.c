/* 
Ejercicio 3. Calcule mediante bucles for las siguientes sumatorias.
*/

#include <stdio.h>
#include <math.h>

int main()
{

    for( float i=1 ; i < 101 ; printf("%f\n",(1/i++)) );

    printf("------------------\n");

    for( float k=1 ; k < 31 ; k++ ) printf("%f\n",(1/(k*k)) );

    printf("------------------\n");

    for( int j=1 ; j < 26 ; j++ ) printf("%f\n",(1/(pow(j,j))) );

    printf("------------------\n");

    for( int i = 2 ; i < 11; i++) printf("%d\n",(i + 1)*i );

}