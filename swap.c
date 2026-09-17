#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int temp;

    printf("请输入两个整数（空格分开）：");
    scanf("%d %d", a, b);

    printf("交换前：a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("交换后：a = %d, b = %d\n", a, b);

    return 0;
}
