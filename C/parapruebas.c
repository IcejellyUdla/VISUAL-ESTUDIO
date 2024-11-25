#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, n1=0, n2=1, n3;
    printf("hasta que numero quiere la serie \n");
    scanf("%d", &n);
    if (n<2)
    {
        printf("el numero debe ser mayor a 2");
        return 0;
    }
    printf("%d %d ", n1, n2);
    for (int i = 2; i < n; i+=1)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ", n3);
    }
    return 0;
    return 0;
}