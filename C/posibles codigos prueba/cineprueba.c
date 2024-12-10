#include <stdio.h>
int main (int argc, char *argv[]) {
    float cantidadpersonas,edadpersona=0,contadorpersonas=0; 
    int numpersonas=1;
    float precioni=3.50, precioad=7, precio3era=3, total;
    printf("ingrese cuantas personas van a ingresar: ");
    scanf("%f", &cantidadpersonas);

if (cantidadpersonas>0)
{
    while (contadorpersonas<cantidadpersonas)
    {
    printf("INGRESE LA EDAD DE LA PERSONA: ");
    scanf("%f", &edadpersona);
    if (edadpersona>=1&&edadpersona<12)
    {
        edadpersona=precioni;
        printf("La precio de la entrada de la persona ");
        printf("%i ", numpersonas); 
        printf("es de: $");
        printf("%.2f\n", edadpersona);
        total=total+edadpersona;
        contadorpersonas=contadorpersonas+1;
        numpersonas=numpersonas+1;
    }
    else if (edadpersona>=12&&edadpersona<65)
    {
        edadpersona=precioad;
        printf("La precio de la entrada de la persona ");
        printf("%i ", numpersonas); 
        printf("es de: $");
        printf("%.2f\n", edadpersona);
        total=total+edadpersona;
        contadorpersonas=contadorpersonas+1;
        numpersonas=numpersonas+1;
    }
    else if (edadpersona>=65)
    {
        edadpersona=precio3era;
        printf("La precio de la entrada de la persona ");
        printf("%i ", numpersonas); 
        printf("es de: $");
        printf("%.2f\n", edadpersona);
        total=total+edadpersona;
        contadorpersonas=contadorpersonas+1;
        numpersonas=numpersonas+1;
    }
    else
    {
        printf("EDAD INCORRECTA INGRESE DE NUEVO\n");
    }
    }
    }
    else
    {
    printf("ERROR\n");
    return 0 ;
    }
    printf("El valor total por las dos entradas es de: $");
    printf("%.2f", total);
    return 0;
}