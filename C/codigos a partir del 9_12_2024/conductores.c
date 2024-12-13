#include <stdio.h>

int main (int argc, char *argv[]) {
    int numconductores;
    float tmnc1,tmxc1,tpc1,edac1;
    float tmnc,tmxc,tpc,edac;
    float maxtmnc,mintmxc,mintpc,proedac;
    do
    {
        printf("ingrese el numero de conductores los numeros son desde el 1 hasta el 5:");
        scanf("%d", &numconductores);
        if (numconductores<=0||numconductores>=5)
        {
            printf("el numero de conductores es desde el 1 hasta 5");   
        }
    } while (numconductores<=0||numconductores>=5);
    
    if (numconductores==1)
    {
        printf("ingrese el tiempo minimo del conductor en terminar la meta: ");
        scanf("%f", &tmnc1);
        printf("ingrese el tiempo maximo del conductor en terminar la meta: ");
        scanf("%f", &tmxc1);
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
        for (int i = 1; i < numconductores+1; i++)
        {
        printf("ingrese el tiempo minimo del conductor %d en terminar la meta: ",i);
        scanf("%f", &tmnc);
        printf("ingrese el tiempo maximo del conductor %d en terminar la meta: ",i);
        scanf("%f", &tmxc);
        printf("ingrese el tiempo en pits del conductor %d: ",i);
        scanf("%f", &tpc);
        printf("ingrese la edad del conductor %d: ",i);
        scanf("%f", &edac);
        if (maxtmnc>=tmnc)
        {
            maxtmnc=tmnc;
        }
        if (mintmxc<=tmxc)
        {
            mintmxc=tmxc;
        }
        if (mintpc<=tpc)
        {
            mintpc=tpc;
        }
        proedac=proedac+edac;  
        }
        proedac=proedac/numconductores;
        printf("el menor tiempo fue de %.2f\n", maxtmnc );
        printf("el mayor tiempo fue de %.2f\n", mintmxc );
        printf("el menor tiempo en pits fue de %.2f\n", mintpc );
        printf("el promedio de edad es de %.2f\n", proedac );
        return 0;
    }
    else if (numconductores==3)
    {
        for (int i = 1; i < numconductores+1; i++)
        {
        printf("ingrese el tiempo minimo del conductor %d en terminar la meta: ",i);
        scanf("%f", &tmnc);
        printf("ingrese el tiempo maximo del conductor %d en terminar la meta: ",i);
        scanf("%f", &tmxc);
        printf("ingrese el tiempo en pits del conductor %d: ",i);
        scanf("%f", &tpc);
        printf("ingrese la edad del conductor %d: ",i);
        scanf("%f", &edac);
        if (maxtmnc>=tmnc)
        {
            maxtmnc=tmnc;
        }
        if (mintmxc<=tmxc)
        {
            mintmxc=tmxc;
        }
        if (mintpc<=tpc)
        {
            mintpc=tpc;
        }
        proedac=proedac+edac;  
        }
        proedac=proedac/numconductores;
        printf("el menor tiempo fue de %.2f\n", maxtmnc );
        printf("el mayor tiempo fue de %.2f\n", mintmxc );
        printf("el menor tiempo en pits fue de %.2f\n", mintpc );
        printf("el promedio de edad es de %.2f\n", proedac );
        return 0;
    }
    else if (numconductores==4)
    {
        for (int i = 1; i < numconductores+1; i++)
        {
        printf("ingrese el tiempo minimo del conductor %d en terminar la meta: ",i);
        scanf("%f", &tmnc);
        printf("ingrese el tiempo maximo del conductor %d en terminar la meta: ",i);
        scanf("%f", &tmxc);
        printf("ingrese el tiempo en pits del conductor %d: ",i);
        scanf("%f", &tpc);
        printf("ingrese la edad del conductor %d: ",i);
        scanf("%f", &edac);
        if (maxtmnc>=tmnc)
        {
            maxtmnc=tmnc;
        }
        if (mintmxc<=tmxc)
        {
            mintmxc=tmxc;
        }
        if (mintpc<=tpc)
        {
            mintpc=tpc;
        }
        proedac=proedac+edac;  
        }
        proedac=proedac/numconductores;
        printf("el menor tiempo fue de %.2f\n", maxtmnc );
        printf("el mayor tiempo fue de %.2f\n", mintmxc );
        printf("el menor tiempo en pits fue de %.2f\n", mintpc );
        printf("el promedio de edad es de %.2f\n", proedac );
        return 0;
    }
    else if (numconductores==5)
    {
        for (int i = 1; i < numconductores+1; i++)
        {
        printf("ingrese el tiempo minimo del conductor %d en terminar la meta: ",i);
        scanf("%f", &tmnc);
        printf("ingrese el tiempo maximo del conductor %d en terminar la meta: ",i);
        scanf("%f", &tmxc);
        printf("ingrese el tiempo en pits del conductor %d: ",i);
        scanf("%f", &tpc);
        printf("ingrese la edad del conductor %d: ",i);
        scanf("%f", &edac);
        if (maxtmnc>=tmnc)
        {
            maxtmnc=tmnc;
        }
        if (mintmxc<=tmxc)
        {
            mintmxc=tmxc;
        }
        if (mintpc<=tpc)
        {
            mintpc=tpc;
        }
        proedac=proedac+edac;  
        }
        proedac=proedac/numconductores;
        printf("el menor tiempo fue de %.2f\n", maxtmnc );
        printf("el mayor tiempo fue de %.2f\n", mintmxc );
        printf("el menor tiempo en pits fue de %.2f\n", mintpc );
        printf("el promedio de edad es de %.2f\n", proedac );
        return 0;
    }
    return 0;
    }