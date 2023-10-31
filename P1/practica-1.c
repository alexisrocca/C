#include<stdio.h>
// ejercicio 7

// Un año es bisiesto si es divisible por 400, o bien si es divisible por 4 pero no por
// 100. Escriba un programa que lea por teclado un año y devuelva si es bisiesto o no.

// int main(){

//     int a;

//     printf("ingrese un año: ");
//     scanf("%d", &a);

//     if (a%400 == 0){
//         printf("el año es biciesto");
//     }else{
//         printf("el año no es biciesto");
//     }

//     return 0;
// }


// Ejercicio 8. Simplifique el siguiente código de forma que sean necesarias menos compara-
// ciones.
// 1 if ( Edad > 64) printf ( " Seguridad Social " ) ;
// 2 if ( Edad < 18) printf ( " Exento " ) ;
// 3 if (( Edad >= 18) && ( Edad < 65) ) printf ( " Imposible " ) ;

// int main(){

//     int edad;
//     printf("ingrese su edad: ");
//     scanf("%d",&edad);

//     if (edad < 18){

//         printf ("Exento");

//     } else if (edad > 64){

//         printf ("Seguridad Social");

//     }else{

//         printf ("Imposible");

//     }
//     return 0;
// }

// Ejercicio 9. Escriba un programa que muestre los números enteros del 1 al 100


/* int main(){
    int i = 1;
    while (i < 101)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
 */

//Ejercicio 10. Escriba un programa que muestre los números impares del 1 al 100

// int main(){

//     int i=1;
    
//     while (i<101)
//     {
//         printf("te estas portando %d seras recompensado\n",i);
//         i += 2;
//     }
//     return 0;

// }

/* 
int main(){

    int num1, num2;

    printf("ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);

    while (num1 > num2){

        printf("vuelva a ingresar el segundo numero: ");
        scanf("%d", &num2);

    }

    while(num1 <= num2){

        printf("%d\n",num1);
        num1 += 1;

    }

    return 0;
} */

// Ejercicio 12. Escriba un programa que, dado un número ingresado por teclado, determine si
// el mismo es primo o no, mostrándolo por pantalla.
/* 
int main() {

    int cantDivisores = 1,num,num_aux;

    printf("Ingrese un num: ");
    scanf("%d",&num);
    num_aux = num/2;
    while ((cantDivisores < 3) && (num_aux >= 1))
    {
        if ((num % num_aux) == 0) cantDivisores++;
        num_aux--;
    }
    
    if (cantDivisores < 3) printf("\nEl numero ingresado es primo\n");
    else printf("\nEl numero ingresado NO es primo\n\n");

} */

//Ejercicio 13. Escriba un programa que lea un número por teclado y muestre el factorial del
//mismo. Sugerencia: definir la variable que represente el factorial como double.
/* 
int main(){
    int num;
    double factorial = 1;
    printf("Ingrese el numero que quiera saber su factorial\n");
    scanf("%d", &num);
    while (num != 0)
    {
        factorial *= num;
        num--;
    }
    printf("Su factorial es: %lf", factorial);
    return 0;
} */
/* 

Ejercicio 14. Los pacientes con síntomas de una cierta enfermedad son ingresados en el
hospital si tienen un valor superior a 0,6 en la medición de un determinado índice, y son opera-
dos si el valor es superior a 0,9. Escriba un programa en C que lea desde el teclado el número
de pacientes a analizar seguido de la edad y el índice de cada paciente. El programa debe
calcular y mostrar la edad media de los pacientes analizados, la edad media de los ingresados
y la edad media de los operados. */

int main(){

    int cant_pacientes;
    int  edad, edad_media_total, cant_pacientes_ingresados = 0, cant_pacientes_operados = 0, edad_media_ingresados = 0, edad_media_operados = 0;
    float indice;
    printf("ingrese la cantidad de pacientes a computar: ");
    scanf("%d", &cant_pacientes);

    while (cant_pacientes != 0){

        printf("ingrese el indice y la edad del paciente: ");
        scanf("%f %d", &indice, &edad);

        if ((indice < 0.9) && (indice > 0.6)){
            printf("ingresa a la guardia\n");
            cant_pacientes_ingresados++;
            cant_pacientes_ingresados += edad;
            edad_media_total += edad;
        }else if (indice > 0.9){
            printf("el paciente debe ser operado\n");
            cant_pacientes_operados++;
            edad_media_operados += edad;
            edad_media_total += edad;
        }else{
            printf("el paciente no es ingresado\n");
            edad_media_total += edad;
        }
        cant_pacientes--;
    }
    edad_media_ingresados = edad_media_ingresados / cant_pacientes_ingresados;
    edad_media_operados = edad_media_operados / cant_pacientes_operados;
    edad_media_total = edad_media_total / cant_pacientes_ingresados + cant_pacientes_operados;
    printf("la edad media es: %d\n", edad_media_total);
    printf("la edad media de los ingresados es: %d\n", edad_media_ingresados);
    printf("la edad media de los operados es: %d\n", edad_media_operados);

    return 0;
}




