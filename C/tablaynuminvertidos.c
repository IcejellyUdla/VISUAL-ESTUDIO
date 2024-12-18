#include <stdio.h>

int main(int argc, char *argv[])
{
    int paso1 = 0, paso2 = 0, numero, opc;
    int d, n, numerosuma = 0, numero2;
    int par, impar;
    do
    {
        printf("Ingrese un numero de 4 cifras\n");
        printf(">>> ");
        scanf("%d", &numero);
        while (paso1 == 0)
        {
            printf("Escoga una opcion ecribiedo un numero del 1 al 3\n");
            printf("1: Suma de digitos\n");
            printf("2: Cantidad Pares/Impares\n");
            printf("3: Invierta Numero\n");
            printf(">>> ");
            scanf("%d", &opc);
            if (opc >= 1 && opc <= 3)
            {
                paso1 = 1;
            }
            else
            {
                printf("Error para escoger una opcion de be ser un numero del 1 al 3, ingrese de nuevo\n");
            }
        }
        if (numero > 999 && numero < 10000)
        {
            paso2 = 1;
        }
        else
        {
            printf("Error el numero ingresado debe ser desde el 1000 hasta el 10000 , ingrese de nuevo\n");
        }

    } while (paso2 == 0);

    switch (opc)
    {
    case 1:
        while (numero != 0)
        {
            d = numero % 10;
            n = numero / 10;
            numero = n;
            numero2 = d;
            numerosuma = numerosuma + numero2;
        }
        printf("%d", numerosuma);
        break;
    case 2:
        break;
    case 3:
        while (numero != 0)
        {
            d = numero % 10;
            n = numero / 10;
            numero = n;
            numero2 = d;
            printf("%d", numero2);
        }
    }
    printf("\nadios");

    return 0;
}