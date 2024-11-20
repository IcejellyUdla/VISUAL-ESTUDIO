#include <stdio.h>

int main (int argc, char *argv[]) {
float n1, n2, resultado=0;
printf("ingrese n1: ");
scanf("%f", &n1);
printf("ingrese n2: ");
scanf("%f", &n2);
for (int i = 0; i < n2; i++)
{
    resultado= resultado+n1;
}
    printf("%.2f\n", resultado);
    return 0;
}   