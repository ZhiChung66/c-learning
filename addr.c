#include <stdio.h>

int main(void)
{
    int a=3;
    int *p=&a;

    printf("a的值   :%d\n",a);
    printf("a的地址  :%p\n",(void*)&a);
    printf("p里装的   :%p\n",(void*)p);
    printf("去p那里看 :%d\n",*p);

    *p=99;
    printf("改完*p后a:%d\n",a);

    return 0;

}