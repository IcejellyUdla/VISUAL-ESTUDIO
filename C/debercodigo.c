#include <stdio.h>

int main() {
    float diametro, altura, sumaDiametro = 0, sumaAltura = 0;
    int contador = 0;
    char respuesta;

    do {
        printf("Ingresa el diámetro del tronco: ");
        scanf("%f", &diametro);

        printf("Ingresa la altura del tronco: ");
        scanf("%f", &altura);

        sumaDiametro += diametro;
        sumaAltura += altura;
        contador++;

        printf("¿Deseas ingresar otro tronco? (S/N): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 'S' || respuesta == 's');

    if (contador > 0) {
        printf("Promedio de diámetro: %.2f\n", sumaDiametro / contador);
        printf("Promedio de altura: %.2f\n", sumaAltura / contador);
    } else {
        printf("No se ingresaron datos.\n");
    }

    return 0;
}
