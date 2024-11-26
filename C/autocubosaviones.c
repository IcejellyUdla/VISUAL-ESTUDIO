#include <stdio.h>

int main (int argc, char *argv[]) {
    int cubos,ruedas,cuboau=10,cuboav=15,ruedaau=4,ruedaav=2;
    printf("ingrese el numero de cubos\n");
    printf(">>> ");
    scanf("%d", &cubos);
    printf("ingrese el numero de ruedas\n");
    printf(">>> ");
    scanf("%d", &ruedas);
    int autos, aviones;
    autos=(cubos/cuboau);
    aviones=(cubos/cuboav);
    if ((ruedas/ruedaau)<autos)
    {
        autos=ruedas/ruedaau;
    }
   if ((ruedas/ruedaav)<aviones)
    {
        aviones=ruedas/ruedaav;
    }
    if (autos>aviones)
    {
        printf("autos ");
        printf("%d", autos);
        return 0;
    }
    else if (aviones>autos)
    {
        printf("aviones\n");
        return 0;
    }
    else
    {
        printf("Se  puede hacer la misma cantidad de autos y de aviones");
    }
    
    return 0;
}