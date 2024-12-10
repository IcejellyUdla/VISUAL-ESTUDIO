#include <stdio.h>

int main (int argc, char *argv[]) {
    int edadmoha=969, numintento=0, numlimite=3,numadivina;
    printf("adivide la edad de Matusalen tiene 3 intentos\n");
    printf("pista la edad esta entre 0 a 1000\n");
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
        else
        {
            printf("intenta de nuevo\n");
            numintento=numintento+1;
        }
        
    }
    if (numintento==numlimite)
    {
        printf("fallaste intenta de nuevo");
    }
    
    

    return 0;
}