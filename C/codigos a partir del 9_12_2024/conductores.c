#include <stdio.h>

int main (int argc, char *argv[]) {
    int numconductores;
    float tmnc1,tmxc1,tpc1,edac1;
    float tmnc,tmxc,tpc,edac;
    float maxtmnc,mintmxc,mintpc,proedac=0;
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
        printf("ingrese el tiempo minimo del conductor en terminar la meta: ");
        scanf("%f", &tmnc);
        printf("ingrese el tiempo maximo del conductor en terminar la meta: ");
        scanf("%f1", &tmxc);
        printf("ingrese el tiempo en pits del conductor: ");
        scanf("%f", &tpc);
        printf("ingrese la edad del conductor: ");
        scanf("%f", &edac);
        if (tmnc<=tmnc)
        {
            maxtmnc=tmnc;
        }
        if (tmxc<=tmxc)
        {
            mintmxc=tmxc;
        }
        if (tpc<=tpc)
        {
            mintpc=tpc;
        }
        proedac=proedac+edac;  
        }
        proedac=proedac/numconductores;
        printf("el menor tiempo fue de %.2f\n", maxtmnc );
        printf("el mayor tiempo fue de %.2f\n", mintmxc );
        printf("el tiempo en pits fue de %.2f\n", mintpc );
        printf("el promedio de edad es de %.2f\n", proedac );
        return 0;
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