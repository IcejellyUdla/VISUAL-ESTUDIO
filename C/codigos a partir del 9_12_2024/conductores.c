#include <stdio.h>

int main (int argc, char *argv[]) {
    int numconductores;
    float tmnc1,tmxc1,tpc1,edac1;
    float tmnc2,tmxc2,tpc2,edac2;
    float tmnc3,tmxc3,tpc3,edac3;
    float tmnc4,tmxc4,tpc4,edac4;
    float tmnc5,tmxc5,tpc5,edac5;
    printf("ingrese el numero de conductores, el maximo numero son 5:");
    scanf("%d", &numconductores);
    if (numconductores==1)
    {
        printf("ingrese el tiempo minimo del conductor en terminar la meta: ");
        scanf("%f", &tmnc1);
        printf("ingrese el tiempo maximo del conductor en terminar la meta: ");
        scanf("%f1", &tmxc1);
        printf("ingrese el tiempo en pits del conductor: ");
        scanf("%f", &tpc1);
        printf("ingrese la edad del conductor: ");
        scanf("%f", &edac1);
        printf("el menor tiempo fue de %.2f\n", tmnc1 );
        printf("el mayor tiempo fue de %.2f\n", tmxc1 );
        printf("el tiempo en pits fue de %.2f\n", tpc1 );
        printf("el promedio de edad es de %.2f\n", edac1 );
        return 0;
    }
    else if (numconductores==2)
    {
        for (int i = 1; i < numconductores; i++)
        {
        
        }
        
        printf("ingrese el tiempo minimo en terminar la meta");
        scanf("%f", &tmnc1);
    }
    else if (numconductores==3)
    {
        printf("ingrese el tiempo minimo en terminar la meta");
        scanf("%f", &tmnc1);
    }
    else if (numconductores==4)
    {
        printf("ingrese el tiempo minimo en terminar la meta");
        scanf("%f", &tmnc1);
    }
    else if (numconductores==5)
    {
        printf("ingrese el tiempo minimo en terminar la meta");
        scanf("%f", &tmnc1);
    }
    else
    {
    printf("el numero de conductores es desde el 1 hasta 5");    
    }
    return 0;
    }