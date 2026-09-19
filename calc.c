#include <stdio.h>

int main(void)
{
    double a,b,result;
    char op;

    printf("请输入算式(例如3+5):");
    scanf("%lf %c %lf",&a,&op,&b);

    if (op=='+'||op=='-'||op=='*'||op=='/')
    {
       switch(op)
       {
       case '+':
           result =a+b;
           printf("%g+%g=%g\n",a,b,result);
           break;
        case'-':
            result =a-b;
            printf("%g-%g=%g\n",a,b,result);
            break;
        case '*':
            result=a*b;
            printf("%g*%g=%g\n",a,b,result);
            break;
        case '/':
            if (b==0)
            {
                printf("错误:除数不能为0。\n");
            }
            else
            {
                result=a/b;
                printf("%g/%g=%g\n",a,b,result);
            }
            break;
       }
    }
    else
    {
       printf("不支持的运算符：%c\n",op);
    }

    return 0;
}
       
    