#include <stdio.h>

int main (int argc, char *argv[]) {
    int  Opc;
    float n1, n2;

    printf("ingrese la operación deseada: Suma= 1,Resta= 2,Multiplicación= 3,División= 4: ");
    scanf("%d", &Opc);
    printf("ingrese el primer valor: ");
    scanf("%f", &n1);
    printf("ingrese el segundo valor: ");
    scanf("%f", &n2);
    
 
 if (Opc==1)
 {
    printf("El resultado es: %f\n", (n1+n2));
 }
 else if (Opc==2)
 {
    printf("El resultado es: %f\n", (n1-n2));
 }
 else if (Opc==3)
 {
    printf("El resultado es: %f\n", (n1*n2));
 }
 else if (Opc==4 && n1==0 ||n2==0)
 {
    printf("ERROR");
 }
 else
 {
    printf("El resultado es: %f\n", (n1/n2));
 }
    return 0;
}
