#include <stdio.h>

int main (int argc, char *argv[]) {
     float n1;
    float n2;
    float promedio;
    int asistencia;
    //float n1, n2, promedio
    
    printf ("ingrese la nota 1: ");
    scanf("%f", &n1);
    
    printf ("ingrese la nota 2: ");
    scanf("%f", &n2);
 
    promedio=(n1+n2)/2;
    printf("El promedio final es: %f\n", promedio);

    if (promedio>=0 && promedio<=2)
    {
        printf("insuficiente");
    }
    else if (promedio>=3 && promedio<=4)
    {
        printf("regular");
    }
     else if (promedio>=5 && promedio<=6)
    {
        printf("bueno");
    }
     else if (promedio>=7 && promedio<=8)
    {
        printf("muy bueno");
    }
     else if (promedio>=9 && promedio<=10)
    {
        printf("Excelente");
    }
    
    
    return 0;
}