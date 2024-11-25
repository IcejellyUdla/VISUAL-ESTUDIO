#include <stdio.h>

int main (int argc, char *argv[]) {
    int opc1, opc2;
    while (opc2==1)
    {
        printf("Seleccione la opcion deseada elijiendo un numero del 1 al 6\n");
        printf("1=Numero Factorial\n");
        printf("2=Producto mediante sumas\n");
        printf(">> ");
        scanf("%d", &opc1);
        printf("SI QUIERE CAMBIAR LA OPCION ELIGA EL 1 O EL 2\n");
        printf("1=SI\n");
        printf("2=NO\n");
        printf(">> ");
        scanf("%d", &opc2);
    }
    if (opc1>6)
    {
        printf("ERROR\n");
        printf("debe escoger entre el 1 al 6");
        return 0;
    }
    else if (opc1==1)
    {
        printf("gg");
        return 0;
    }
    else if (opc1==2)
    {
        printf("XD");
        return 0;
    }

    return 0;
}