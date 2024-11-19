#include <stdio.h>

int main (int argc, char *argv[]) {
    int opc;
    printf("sellecione una opcion:\n");
    printf("1. serie de fibonacci\n");
    printf("2. multiplicacion (sumas sucesivas)\n");
    printf("3. potencia (multipplicaciones sucesivas)\n");
    printf(">>");
    scanf("%d",&opc);
    switch (opc)
    {
    case 1:
     int n, n1=0, n2=1, n3;
    printf("hasta que numero quiere la serie \n");
    scanf("%d", &n);
    if (n<2)
    {
        printf("el numero debe ser mayor a 2");
        return 0;
    }
    printf("%d %d ", n1, n2);
    for (int i = 2; i < n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ", n3);
    }
    return 0;
    case 2:
        printf("Multiplicacion\n");
        float nu1, nu2, resultado=0;
        printf("ingrese n1: ");
        scanf("%f", &nu1);
        printf("ingrese n2: ");
        scanf("%f", &nu2);
        for (int i = 0; i < nu2; i++)
    {
        resultado= resultado+nu1;
    }
        printf("%.2f\n", resultado);
        return 0;
case 3: 
        int num1, num2, result=1;
        printf("ingrese la base: ");
        scanf("%d", &num1);
        printf("ingrese el exponente: ");
        scanf("%d", &num2);
    if (num2<0)
    {
        printf("el valor debe ser un numero positivo");
        return 0;
    }
    else if (num2==0)
    {
    printf("El resultado es 1");
    return 0;
    }
    else
    {
    for (int i = 1; i <= num2; i++)
    {
        resultado= result*num1;
    }
        printf("%d\n", result);
    }
    return 0;
    }
}
    