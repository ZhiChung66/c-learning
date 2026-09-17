#include <stdio.h>

/* W1D4：用 scanf 读两个整数，借助第三个变量交换 */

int main(void)
{
    int a;
    int b;
    int temp;

    printf("请输入两个整数（空格分开）：");
    scanf("%d %d", &a, &b);

    printf("交换前：a = %d, b = %d\n", a, b);

    temp = a;      /* 先把 a 的旧值存起来 */
    a = b;         /* a 拿到 b 的值 */
    b = temp;      /* b 拿到刚才存起来的旧 a */

    printf("交换后：a = %d, b = %d\n", a, b);

    return 0;
}
