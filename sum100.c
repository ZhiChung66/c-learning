#include<stdio.h>

int main(void)
{
    int i=1;
    int sum=0;

    while (i<=100)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("1+2+...+100=%d\n",sum);

    return 0;
}