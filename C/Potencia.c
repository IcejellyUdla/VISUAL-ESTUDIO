#include <stdio.h>

int main (int argc, char *argv[]) {
int n1, n2, resultado=1;
printf("ingrese la base: ");
scanf("%d", &n1);
printf("ingrese el exponente: ");
scanf("%d", &n2);
if (n2<0)
{
    printf("el valor debe ser un numero positivo");
    return 0;
}
else if (n2==0)
{
    printf("El resultado es 1");
    return 0;
}
else
{
for (int i = 1; i <= n2; i++)
{
    resultado= resultado*n1;
}
}
    printf("%d\n", resultado);
    return 0;
}