#include <stdio.h>

int main (int argc, char *argv[]) {
    float n1,n2,n3,examfinal,trabajofinal;
    float promedio_notas_parciales, promedio_exf, promedio_trf, calififinal;
    printf("escriba la nota 1: ");
    scanf("%f",&n1 );
    printf("escriba la nota 2: ");
    scanf("%f",&n2 );
    printf("escriba la nota 3: ");
    scanf("%f",&n3 );
    printf("escriba la nota del examen final: ");
    scanf("%f",&examfinal );
    printf("escriba la nota del trabajo final: ");
    scanf("%f",&trabajofinal);
    if (n1>10||n2>10||n3>10||examfinal>10||trabajofinal>10)
    {
    printf("las notas igresadas deben ser menores a 10");
    return 0;
    }
    else if (n1>=0&&n2>=0&&n3>=0&&examfinal>=0&&trabajofinal>=0)
    {
    promedio_notas_parciales=((n1+n2+n3)/3)*0.55;
    promedio_exf=(examfinal*0.30);
    promedio_trf=(trabajofinal*0.15);
    calififinal=(promedio_notas_parciales+promedio_exf+promedio_trf);
    printf("la calificacion final del estudiante es de");
    printf(" %.2f", calififinal);
    }
    else
    {
        printf("los valores ingresados deben ser iguales o mayor a cero");
    }
    return 0;
}