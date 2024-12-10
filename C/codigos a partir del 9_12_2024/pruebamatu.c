#include <stdio.h>

int main (int argc, char *argv[]) {
    int edadMatusalen = 969; // Edad correcta de Matusalén
    int intentos = 3;              // Número de intentos permitidos
    int respuesta;                 // Para almacenar la respuesta del usuario
    int jugarNuevamente = 1;       // Variable para repetir el juego

    while (jugarNuevamente==1) {
        printf("\n¡Adivina la edad de Matusalén! Tienes %d intentos.\n", intentos);

        for (int i = 1; i <= intentos; i++) 
        {
            printf("Intento %d: ", i);
            scanf("%d", &respuesta);

            if (respuesta == edadMatusalen) {
                printf("¡Correcto! La edad de Matusalén es %d.\n", edadMatusalen);
                return 0; // Termina el programa si acierta
            } else if (respuesta < edadMatusalen) {
                printf("Incorrecto, la edad es mayor.\n");
            } else {
                printf("Incorrecto, la edad es menor.\n");
            }
        }

        printf("No lograste adivinar la edad de Matusalén.\n");
        printf("¿Quieres intentarlo nuevamente? (1 para sí, 0 para no): ");
        scanf("%d", &jugarNuevamente);
    }

    printf("¡Gracias por jugar! Hasta luego.\n");
    return 0;
}