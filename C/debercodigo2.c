#include <stdio.h>

int main(int argc, char *argv[])
{
    int numero,numero2,pares=0,impares=0;
    char continuar;
    do
    {
        printf("Ingrese un numero >>> ");
        scanf("%d", &numero);
        numero2 = numero % 2;
        if (numero2 == 0)
        {
            pares = pares + 1;
        }
        else
        {
            impares = impares + 1;
        }
        printf("Cantidad de numeros pares: %d\n", pares);
        printf("Cantidad de numeros impares: %d\n", impares);

        printf("Quiere seguir añadiendo numeros S/N\n");
        printf(">>>");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
    printf("Adios");
    return 0;
}