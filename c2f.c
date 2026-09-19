#include<stdio.h>

int main(void)
{
    double c,f;

    printf("请输入摄氏度：");

    scanf("%lf",&c);

    f=c*9.0/5.0+32.0;
    
    printf("%g 摄氏度=%g 华氏度\n",c,f);

    return 0;

}