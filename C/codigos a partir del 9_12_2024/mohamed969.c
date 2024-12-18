#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    int edadmatusalen = 969, numintento, numlimite = 3, numadivina,contalimite=3;
    char continuar[3] = "si"; 

    printf("Adivina la edad de Matusalen. Tienes 3 intentos\n");
    printf("Pista: la edad esta entre 0 y 1000.\n");

    while (strcmp(continuar, "si") == 0) {
        for (numintento = 0; numintento < numlimite; numintento++) {
            printf("Que edad crees que tiene Matusalen?\n>>> ");
            scanf("%d", &numadivina);

            if (numadivina == edadmatusalen) {
                printf("Ganaste. Felicidades.\n");
                return 0;
            } else if (numadivina < 0 || numadivina > 1000) {
                printf("Recuerda que la edad esta entre 0 y 1000.\n");
                numintento=numintento-1;
            } 
            else if (numadivina < edadmatusalen) 
            {
                printf("El numero es mayor. Intenta de nuevo.\n");
                if (numintento<numlimite-1)
                {
                printf("Tienes %d intentos restanes.\n", contalimite-1);
                contalimite=contalimite-1;
                }
            } 
            else 
            {
                printf("El numero es menor. Intenta de nuevo.\n");
                if (numintento<numlimite-1)
                {
                printf("Tienes %d intentos restanes.\n", contalimite-1);
                contalimite=contalimite-1;
                }
            }
        }
        printf("Se te acabaron los intentos. Escribe \"si\" para continuar o \"no\" para salir: ");
        scanf("%s", continuar); 
        if (strcmp(continuar, "no") != 0) {
            contalimite=3;
        }
        else
        {
            printf("Adios.\n");
            return 0;
        }     
    }
}
