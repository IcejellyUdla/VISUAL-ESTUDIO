#include <stdio.h>

int main (int argc, char *argv[]) {
    int opc;
    printf("sellecione una opcion:\n");
    printf("1. serie de fibonacci\n");
    printf("2. multiplicacion (sumas sucesivas)\n");
    printf("3. potencia (multipplicaciones sucesivas)\n");
    printf(">>");
    scanf("%d",&opc);
    switch (opc)
    {
    case 1:
        printf("fibonacci\n");
        break;
    case 2:
        printf("Multiplicacion\n");
        break;
    case 3: 
        printf("potencia\n");
        break; 
    default:
        printf("no existe la opcion");
        break;
    }
    return 0;
}