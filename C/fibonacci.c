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
     int n, n1=0, n2=1, n3;
    printf("hasta que numero quiere la serie \n");
    scanf("%d", &n);
    if (n<2)
    {
        printf("el numero debe ser mayor a 2");
        return 0;
    }
    printf("%d %d ", n1, n2);
    for (int i = 2; i < n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ", n3);
    }
    return 0;
}
}