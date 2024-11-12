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

    printf ("ingrese el porcentaje de asistencia: ");
    scanf("%d", &asistencia);

    //printf ("ingrese la nota 1 y 2: (n1,n2) ");
    //scanf("%f,%f", &n1, &n2);
 
    promedio=(n1+n2)/2;
    printf("El promedio final es: %f\n", promedio);

    if (promedio>=6)
    {
        printf("Aprobado\n");
    } 
    else if (asistencia>=80)
    {
        printf("Reprueba pero puede recuperar\n");
    }
    else
    {
        printf("Reprueba\n");
    }
    if (promedio>=0 && promedio<=2)
    {
        printf("insuficiente\n");
    }
    else if (promedio>=3 && promedio<=4)
    {
        printf("regular\n");
    }
     else if (promedio>=5 && promedio<=6)
    {
        printf("bueno\n");
    }
     else if (promedio>=7 && promedio<=8)
    {
        printf("muy bueno\n");
    }
     else if (promedio>=9 && promedio<=10)
    {
        printf("Excelente\n");
    }
    return 0;
}
