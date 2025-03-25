#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]) {
    char frase[500];
    int palabracorta=0, palabralarga=0, longpalaactu=0;
    int len=strlen(frase)-1;
    printf("Ingrese un texto: ");
    fflush (stdin),
    fgets(frase,500,stdin);
for (int i = 0; i <= len; i++)
{
    if (frase[i] != ' '&&frase[i] != '\0'&&frase[i] != '\n')
    {
        longpalaactu=longpalaactu+1;
    }
    else
{ 
    printf("gg");
    return 0;
}
    
}
    printf("%d", longpalaactu);
    return 0;
}
