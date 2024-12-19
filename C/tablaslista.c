#include <stdio.h>

int main (int argc, char *argv[]) {
    int numero1,numero2,numero3,resultado;
    char opc;
    do
    {
    printf("ingrese el numero del que quiere la tabla >>> ");
    scanf("%d",&numero1);
    printf("ingrese el numero que quiere que empieze la tabla >>>");
    scanf("%d",&numero2);
    printf("ingrese el numero que quiere que llegue la tabla >>>");
    scanf("%d",&numero3);
    for (int i = numero2; i <= numero3; i++)
    {
        resultado=numero1*numero2;
        printf("%d X %d = %d\n",numero1,numero2,resultado);
        numero2=numero2+1;
    }
    printf("Quiere intentar de nuevo S/N >>> ");
    scanf(" %s",&opc);
    } while (opc=='s'||opc=='S');
    return 0;
}