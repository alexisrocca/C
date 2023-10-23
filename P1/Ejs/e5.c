/* 
Ejercicio 5. Escriba una función que lea la nota de un alumno (entera) y muestre un mensaje
diciendo si sacó insifuciente (2 a 5), aprobado (6), bueno (7), muy bueno (8), distinguido (9)
o sobresaliente (10). Se debe mostrar un mensaje de error si la nota ingresada no es válida.
Este programa debe hacerse de dos maneras diferentes: con if secuenciales y con if-else
anidados. */

#include <stdio.h>

char * notaAlumnoSEC(float nota);

int main(){
    float nota;

    printf("\nIngrese la nota del alumno: ");
    scanf("%f",&nota);

    printf("%s\n",notaAlumnoSEC(nota));

}

char * notaAlumnoSEC(float nota) {

    if (nota > 1 && nota <= 5) return "La nota del alumno es INSUFICIENTE";
    else if (nota == 6) return "La nota del alumno es APROBADO";
    else if (nota == 7) return "La nota del alumno es BUENO";
    else if (nota == 8) return "La nota del alumno es MUY BUENO";
    else if (nota == 9) return "La nota del alumno es DISTINGUIDO";
    else if (nota == 10) return "La nota del alumno es SOBRESALIENTE";
    else return "La nota ingresada no es valida";
}