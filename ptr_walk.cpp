#include<iostream>
using namespace std;

int main()
{
    int a[5]={12,45,7,33,21};
    int *p;
    int i;

    p=a;
    for (i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p=p+1;
    }
    return 0;
}