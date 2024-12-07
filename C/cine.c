#include <stdio.h>

int main (int argc, char *argv[]) {
    float edadpersona1, edadpersona2;
    float precioni=3.50, precioad=7, precio3era=3, total;
    printf("INGRESE LA EDAD DE LA PERSONA 1: ");
    scanf("%f", &edadpersona1);
    printf("INGRESE LA EDAD DE LA PERSONA 2: ");
    scanf("%f", &edadpersona2);

    if (edadpersona1>=1&&edadpersona1<12)
    {
        edadpersona1=precioni;
        printf("La precio de la entrada de la persona 1 es de: ");
        printf("%.2f\n", edadpersona1);
    }
    else if (edadpersona1>=12&&edadpersona1<65)
    {
        edadpersona1=precioad;
        printf("La precio de la entrada de la persona 1 es de: $");
        printf("%.2f\n", edadpersona1);
    }
    else if (edadpersona1>=65)
    {
        edadpersona1=precio3era;
        printf("La precio de la entrada de la persona 1 es de: $");
        printf("%.2f\n", edadpersona1);
    }
    else
    {
        printf("EDAD INCORRECTA INGRESE DE NUEVO");
        return 0;
    }

   if (edadpersona2>=1&&edadpersona2<12)
    {
        edadpersona2=precioni;
        printf("La precio de la entrada de la persona 2 es de: $");
        printf("%.2f\n", edadpersona2);
    }
    else if (edadpersona2>=12&&edadpersona2<65)
    {
        edadpersona2=precioad;
        printf("La precio de la entrada de la persona 2 es de: $");
        printf("%.2f\n", edadpersona2);
    }
    else if (edadpersona2>=65)
    {
        edadpersona2=precio3era;
        printf("La precio de la entrada de la persona 2 es de: $");
        printf("%.2f\n", edadpersona2);
    }
    else
    {
        printf("EDAD INCORRECTA INGRESE DE NUEVO");
        return 0;
    }
    total=edadpersona1+edadpersona2;
    printf("El valor total por las dos entradas es de: $");
    printf("%.2f", total);
    
}