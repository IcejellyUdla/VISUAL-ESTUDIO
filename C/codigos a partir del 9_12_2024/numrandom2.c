#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc, char *argv[]) {
    srand(time(NULL));
    int NumeroAdivinar,Contador;
    int Numero=(rand()%100);
    if (Numero>=1&&Numero<=100)
    {
        for (int Contador = 0; Contador < 5; Contador++)
    {
        printf("ingrese que numero del 1 al 100 estoy pensando: ");
        scanf("%d", &NumeroAdivinar);
        if (NumeroAdivinar>=1&&NumeroAdivinar<=100)
        {
            if (NumeroAdivinar==Numero)
        {
            printf("Ganaste\n");
            return 0;

        }
        else if (NumeroAdivinar<Numero)
        {
            if (Contador<4)
            {
                printf("el numero que pienso es mayor al que escribiste, intenta de nuevo\n");
            }
            else
            {
                printf("Perdiste\n");
                printf("el resultado era %d", Numero);
            }
        }
        else if (NumeroAdivinar>Numero)
        {
            if (Contador<4)
            {
                printf("el numero que pienso es menor al que escribiste, intenta de nuevo\n");
            }
            else
            {
                printf("Perdiste\n");
                printf("el resultado era %d", Numero);
                return 0;
            }
        }
        }
        else
        {
        printf("El numero que escribiste sobrepasa el limite que es de 0 a 100\n");
        Contador=Contador-1;
        }
    }
    }
}

   