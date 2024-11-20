#include <stdio.h>

int main (int argc, char *argv[]) {
   float valorhora_eo=10, valorhora_suple=7.5, valorhora_norm=5, numhora_eo, numhora_suple, numhora_norm, pago;
   int opc1, opc2;
    printf("Ingrese la cantidad de horas normales que tuvo el empleado en la semana: \n");
    scanf("%f",&numhora_norm);
    printf("Tuvo horas extraordinarias esta semana, Escriba 1 para Si y 2 para No" "\n");
    scanf("%d",&opc1);
    printf("Tuvo horas suplementarias esta semana, Escriba 1 para Si y 2 para No" "\n");
    scanf("%d",&opc2);
    if (opc1==1)
    {
    printf("Ingrese la cantidad de horas extraordinarias que tuvo el empleado en la semana: \n");
    scanf("%f",&numhora_eo);
    }
    else if (opc2==1)
    {
    printf("Ingrese la cantidad de horas suplementairas que tuvo el empleado en la semana: \n");
    scanf("%f",&numhora_suple);
    }
    else if (opc1==2&&opc2==2)
    {
    pago=numhora_norm*valorhora_norm;
    printf("El pago del empleado por trabajar ");
    printf("%.2f ", numhora_norm);
    printf("horas normales, ");
    printf("es de: ");
    printf("$ ");
    printf("%.2f ", pago);
    return 0;
    }
    else if (numhora_eo>=0 && numhora_norm>=0 && numhora_suple>=0)
    {
    valorhora_eo=valorhora_eo*numhora_eo;
    valorhora_suple=valorhora_eo*numhora_suple;
    valorhora_norm=valorhora_norm*numhora_norm;
    pago=valorhora_eo+valorhora_norm+valorhora_suple;
    printf(" El pago del empleado por trabajar ");
    printf("%.2f ", numhora_norm);
    printf("de horas normales, ");
    printf("%.2f ", numhora_eo);
    printf("de horas extraordinarias y ");
    printf("%.2f ", numhora_suple);
    printf("de horas suplementarias es de: ");
    printf("%.2f ", pago);
    return 0;
    }
    else if (numhora_eo<0 && numhora_norm<0 && numhora_suple<0)
    {
       printf("El valor de las horas ingresadas deben ser positivas");
       return 0;
    }
    else if (numhora_norm<0)
    {
        printf("El valor de horas ingresadas debe ser positiva");
        return 0;
    }
    return 0;
}
