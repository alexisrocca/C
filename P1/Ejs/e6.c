/* 
Ejercicio 6. Construya un programa que lea por teclado el día y mes de nacimiento de una
persona como números enteros y calcule su signo del zodíaco, mostrándolo por pantalla.
*/

#include <stdio.h>

void calcZodiaco(int dia, int mes);

int main(){
    int dia,mes;

    printf("\nIngrese el dia y el mes de nacimiento: \n");
    scanf("%d %d",&dia,&mes);
    
    calcZodiaco(dia,mes);
    
}

void calcZodiaco(int dia, int mes) {

    if ((mes <= 0) || (mes > 12) || (dia < 1) || (dia > 31)) 
    {
        printf("\nIngrese una fecha valida\n");
    }

    else if ( ((mes == 3) && (dia >= 21) && (dia <= 31)) || ((mes == 4) && (dia <= 19)) )
    {
        printf("\nSu signo es Aries\n");
    }

    else if ( ((mes == 4) && (dia >= 20) && (dia <= 30)) || ((mes == 5) && (dia <= 20)) )
    {
        printf("\nSu signo es Tauro\n");
    }

    else if ( ((mes == 5) && (dia >= 21) && (dia <= 31)) || ((mes == 6) && (dia <= 21)) )
    {
        printf("\nSu signo es Géminis\n");
    }

    else if ( ((mes == 6) && (dia >= 22) && (dia <= 30)) || ((mes == 7) && (dia <= 21)) )
    {
        printf("\nSu signo es Cáncer\n");
    }

    else if ( ((mes == 7) && (dia >= 22) && (dia <= 31)) || ((mes == 8) && (dia <= 21)) )
    {
        printf("\nSu signo es Leo\n");
    }

    else if ( ((mes == 8) && (dia >= 22) && (dia <= 31)) || ((mes == 9) && (dia <= 22)) )
    {
        printf("\nSu signo es Virgo\n");
    }

    else if ( ((mes == 9) && (dia >= 23) && (dia <= 30)) || ((mes == 10) && (dia <= 22)) )
    {
        printf("\nSu signo es Libra\n");
    }

    else if ( ((mes == 10) && (dia >= 23) && (dia <= 31)) || ((mes == 11) && (dia <= 21)) )
    {
        printf("\nSu signo es Escorpio\n");
    }

    else if ( ((mes == 11) && (dia >= 22) && (dia <= 30)) || ((mes == 12) && (dia <= 21)) )
    {
        printf("\nSu signo es Sagitario\n");
    }

    else if ( ((mes == 12) && (dia >= 22) && (dia <= 31)) || ((mes == 1) && (dia <= 20)) )
    {
        printf("\nSu signo es Capricornio\n");
    }

    else if ( ((mes == 1) && (dia >= 21) && (dia <= 31)) || ((mes == 2) && (dia <= 19)) )
    {
        printf("\nSu signo es Acuario\n");
    }

    else if ( ((mes == 2) && (dia >= 20) && (dia <= 28)) || ((mes == 3) && (dia <= 20)) )
    {
        printf("\nSu signo es Piscis\n");
    }
    
    else 
    {
        printf("\nEl mes seleccionado no posee el dia ingresado.\n");
    }
}