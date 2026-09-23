#include <stdio.h>

double add (double a,double b) {return a+b;}
double sub (double a,double b) {return a-b;}
double mul (double a,double b) {return a*b;}
double div (double a,double b) {if (b==0){return 0;} return a/b;}

int main(void)
{
    double x,y;
    int op;
    printf("请输入两个数(用空格隔开):");
    scanf("%lf %lf",&x,&y);
    printf("请选择运算:1-加 2-减 3-乘 4-除:");
    scanf("%d",&op);
    if (op==1){printf("%f+%f=%f\n",x,y,add(x,y));}
    else if(op==2){printf("%f-%f=%f\n",x,y,sub(x,y));}
    else if(op==3){printf("%f*%f=%f\n",x,y,mul(x,y));}
    else if(op==4){if (y==0){printf("除数不能为0\n");}else{printf("%f/%f=%f\n",x,y,div(x,y));}}
    else{printf("没有这个选项\n");}
    return 0;
}
