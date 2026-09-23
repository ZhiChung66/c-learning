#include <stdio.h>
int main(void)
{
    int n;
    int i;
    int isPrime =1;

    printf("请输入一个大于1的整数:");
    scanf("%d",&n);

    if (n<=1)
    {
        isPrime =0;
    }
    else
    {
        for (i=2;i*i<=n;i=i+1)
        {
            if (n%i==0)
            {
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime==1)
    {
        printf("%d是素数\n",n);
    }
    else
    {
        printf("%d不是素数\n",n);
    }
    return 0;
}