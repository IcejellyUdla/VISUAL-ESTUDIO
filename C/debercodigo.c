#include <stdio.h>

int main(int argc, char *argv[])
{
    float diametro, altura, sumaDiametro = 0, sumaAltura = 0;
    int contador = 0;
    char respuesta;
    do
    {
        printf("Ingresa el diámetro del tronco: ");
        scanf("%f", &diametro);

        printf("Ingresa la altura del tronco: ");
        scanf("%f", &altura);

        sumaDiametro = sumaDiametro + diametro;
        sumaAltura = sumaAltura + altura;
        contador = contador + 1;

        printf("¿Deseas ingresar otro tronco? (S/N): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 'S' || respuesta == 's');
    printf("Promedio de diámetro: %.2f\n", sumaDiametro / contador);
    printf("Promedio de altura: %.2f\n", sumaAltura / contador);
    return 0;
}
