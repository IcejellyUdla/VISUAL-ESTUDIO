#include <stdio.h>

int main (int argc, char *argv[]) {
    int edadmoha=969, numintento=0, numlimite=3,numadivina,continuar=1;
    printf("adivide la edad de Matusalen tiene 3 intentos\n");
    printf("pista la edad esta entre 0 a 1000\n");
   while (continuar==1)
   {
    while (numintento<numlimite)
    {
        printf("Que edad piensa que tiene Matusalen\n");
        printf(">>> ");
        scanf("%d",&numadivina);
        if (numadivina==edadmoha)
        {
            printf("ganaste felicidades");
            return 0;
        }
        else if (numadivina<0||numadivina>1000)
        {
            printf("recuerda que es del 0 al 1000 la edad");
            numintento=0;
        }
        else if (numadivina==0&&numadivina<=900)
        {
            printf("el numero es mucho mas mayor\n");
            printf("intenta de nuevo\n");
            numintento=numintento+1;
        }
        else if (numadivina>900&&numadivina<=960)
        {
            printf("el numero es un poco mas mayor");
            printf("intenta de nuevo\n");
            numintento=numintento+1;
        }
        else if (numadivina>960&&numadivina<=968)
        {
            printf("estas cerca solo un poquito mas");
        }
        else if (numadivina>970&&numadivina<=1000)
        {
            printf("te pasaste retrocede un poco");
        }
   } 
   printf("intentos 0 1 para constinuar 2 para cerrar");
   scanf("%d",&continuar);
   if (continuar==1)
   {
    numintento=0;
   }
   
}
    printf("adios");    
    return 0;
}