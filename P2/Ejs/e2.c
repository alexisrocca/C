/* 
En la siguiente tabla se muestra el número de camas de las habitaciones de una
casa de campo y la planta donde está ubicada cada una de ellas

Se pide que escriba un programa que:
    1. Muestre el listado de las habitaciones de la casa de campo.
    2. Pida por teclado el número (dato entero) asociado a una habitación.
    3. Muestre por pantalla la planta y el número de camas de la habitación seleccionada.

Observación: Si el número introducido por el usuario no está asociado a ninguna habitación,
se mostrará el mensaje: "Número no asociado a habitación."
*/

#include <stdio.h>

int main()
{
    int cond;
    
    printf("\n1. Azul\n2. Roja\n3. Verde\n4. Rosa\n5. Gris\n\nIngrese un numero del 1 al 6: ");
    scanf("%d",&cond);

    switch(cond)
    {
        case 1:
            printf("2 Camas - Primera Planta\n");
            break;
        case 2:
            printf("1 Cama - Primera Planta\n");
            break;
        case 3:
            printf("3 Cama - Segunda Planta\n");
            break;
        case 4:
            printf("2 Cama - Segunda Planta\n");
            break;
        case 5:
            printf("1 Cama - Tercera Planta\n");
            break;
        default:
            printf("\nNúmero no asociado a habitación\n");
        
    }
}