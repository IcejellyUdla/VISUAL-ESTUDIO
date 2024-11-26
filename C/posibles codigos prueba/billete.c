#include <stdio.h>

int main (int argc, char *argv[]) {
    float distancia, preciokm=0.19;
    printf("ingrese la distancia entre las dos estaciones\n");
    printf(">>> ");
    scanf("%f", distancia);
    distancia=distancia*2;
    printf("ingrese la distancia entre las dos estaciones\n");
    printf(">>> ");
    scanf("%f", distancia);
    return 0;
}