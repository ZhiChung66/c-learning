#include<stdio.h>

void swap(int *x,int *y);

void swap(int *x,int *y)
{
    int t;
    printf("[函数内部] 交换前:x指向的值=%d,y指向的值=%d\n",*x,*y);
    t=*x;
    *x=*y;
    *y=t;
    printf("[函数内部] 交换后:x指向的值=%d,y指向的值=%d\n",*x,*y); 
}

int main(void)
{
    int a,b;

    printf("请输入两个整数(中间用空格分开):");
    scanf("%d %d",&a,&b);
    
    printf("交换前:a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("交换后:a=%d,b=%d\n",a,b);

    return 0;
}
