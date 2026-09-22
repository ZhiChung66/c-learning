#include <stdio.h>

int main(void)
{
    int i,j;

    for(i=1;i<=9;i=i+1)
    {
        for(j= 1;j<= i;j= j+1)
        {
            printf("%d*%d=%-2d  ",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}