#include <stdio.h>

int main(void)
{
    double r;
    double area;
    double pi =3.14159;

    printf("请输入圆的半径：");
    scanf("%lf",&r);

    area=pi*r*r;

    printf("半径为%.2f的圆，面积是%.2f\n", r,area);

    return 0;
}