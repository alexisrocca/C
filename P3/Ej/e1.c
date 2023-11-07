#include <stdio.h>
#include <math.h>

struct punto {
    double x;
    double y;
};

// Recibe un punto y devuelve la proyección sobre el eje
// que se pida ( ’ x ’ o ’y ’) . Cualquier otro valor debe ser
// invalidado
double proy (struct punto p, char eje) {
    if (eje == 'x') return p.x;
    else if (eje == 'y') return p.y;
    else return 1;
}

double dist(struct punto punto1,struct punto punto2)
{
    return sqrt(pow((punto2.x - punto1.x),2) + pow((punto2.y - punto1.y),2));
}

char pos(struct punto p)
{
    if (p.x > 0 && p.y > 0) return '1';
    else if (p.x < 0 && p.y > 0) return '2';
    else if (p.x < 0 && p.y < 0) return '3';
    else if (p.x > 0 && p.y < 0) return '4';
    else if (p.x != 0 && p.y == 0) return 'y';
    else if (p.x == 0 && p.y != 0) return 'x';
    else return 'o';
}

int main()
{
    struct punto p1;
    p1.x = 2.3;
    p1.y = 6.6;
    char eje='x';

    printf(
        "\nLa proyeccion de los puntos (%f, %f) en el eje '%c' es %f\n",
        p1.x,
        p1.y,
        eje,
        proy(p1, eje)
    );

    struct punto punto1;
    punto1.x = 3.2;
    punto1.y = 5.2;
    struct punto punto2;
    punto2.x = 6.2;
    punto2.y = 9.2;

    printf(
        "\nLa distancia entre los puntos (%f, %f) y (%f, %f) es %f\n",
        punto1.x,
        punto1.y,
        punto2.x,
        punto2.y,
        dist(punto1,punto2)
    );

    struct punto p;
    
    printf("\nIngrese las coordenadas (x,y) de un punto: \n");
    scanf("%lf",&p.x);
    scanf("%lf",&p.y);
    printf("\nEl punto esta en: %c\n",pos(p));

}