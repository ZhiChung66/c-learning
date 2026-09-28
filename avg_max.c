#include<stdio.h>
int main(void)
{
    int a[10];
    int i;
    int max;
    int sum=0;
    double avg;
    printf("请输入10个整数(每输入一个按一次回车): \n") ;
    for(i=0;i<10;i=i+1)
    {
        printf("第%d个数:",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i=i+1)
    {
        sum=sum+a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    avg=sum/10.0;
    printf("\n你输入的10个数是: ");
    for(i=0;i<10;i=i+1)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("总和   = %d\n", sum);
    printf("最大值 = %d\n", max);
    printf("平均值 = %.2f\n", avg);
    return 0;
}