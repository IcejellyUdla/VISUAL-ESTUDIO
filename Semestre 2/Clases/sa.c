#include <stdio.h>

int main(){
    int a[3][3];
    int b[3][3] ={{3,4,2},
                  {4,3,2},
                  {7,5,6}};
    int sum;
    
    for (int i=0; i<3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            a[i][j]=1;
        }
    }

    for (int i=0; i<3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum= a[i][j] + b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return 0;
}