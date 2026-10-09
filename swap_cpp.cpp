#include <iostream>
using namespace std;

//一号：第2周那个失败的版本——值传递
void swap_val(int x,int y)
{
    int t= x;
    x =y;
    y =t;
    cout<<"[swap_val内部] x="<<x<<"y="<<y<<endl;
}

//二号：今天的版本——指针传递
void swap_ptr(int*x,int*y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
int main(void)
{
    int a,b;
    cout<<"请输入两个整数(空格隔开):";
    cin>>a>>b;

    cout<<"a的地址="<<&a<< endl;
    cout<<"b的地址="<<&b<< endl;
    cout << "--- 试验一:值传递(第2周的做法)---" << endl;
    cout << "  调用前:a=" << a << " b=" << b << endl;
    swap_val(a, b);
    cout << "  调用后:a=" << a << " b=" << b << endl;

    cout << "--- 试验二：指针传递（今天的做法）---" << endl;
    cout << "  调用前:a=" << a << " b=" << b << endl;
    swap_ptr(&a, &b);
    cout << "  调用后:a=" << a << " b=" << b << endl;

    return 0;
}
