#include <stdio.h>

int main (int argc, char *argv[]) {
    int a [20];
    int b [20]={3,4,5,2,4,5,6,6,3,2};
    int sum;
    for (int i = 0; i < 10; i++)
    {
        a[i]=2;
    }
    for (int i = 0; i < 10; i++)
    {
        sum=a[i]+b[i];
        printf("%d\n",sum);
    }

    return 0;
}
