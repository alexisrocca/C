/* 
Ejercicio 8. Simplifique el siguiente código de forma que sean necesarias menos comparaciones.
    if ( Edad > 64) printf ( " Seguridad Social " ) ;
    if ( Edad < 18) printf ( " Exento " ) ;
    if (( Edad >= 18) && ( Edad < 65) ) printf ( " Imposible " ) ;
*/

#include <stdio.h>


int main(){

    int edad;

    printf("\nIngrese su edad: \n");
    scanf("%d",&edad);

    if (edad < 18) printf ("\nExento\n");
    else if (edad > 64) printf ("\nSeguridad Social\n");
    else printf ("\nImposible\n");

}