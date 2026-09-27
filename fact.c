#include<stdio.h>

int fact(int n);

int main (void)
{
 int n;
 printf("请输入一个1到10之间的整数:");
 scanf("%d",&n);
 printf("%d 的阶乘=%d\n",n,fact(n));
 return 0;
}

int fact(int n)
{
    int r;
    printf("进入fact(%d)\n",n);
    if(n<=1)
    {
        printf("到底了,fact(1)=1\n");
        return 1;
    }
    r=n*fact(n-1);
    printf("fact(%d)=%d\n",n,r);
    return r;
}