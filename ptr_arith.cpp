#include <iostream>
using namespace std;

int main(void)
{
    int a=10;
    int*p=&a;
    cout<<"int p="<<p<<"p+1="<<p+1<< endl;

    char c='A';
    char*q=&c;
    cout<<"char q="<<(void*)q<<"q+1="<<(void*)(q+1)<<endl;

    return 0;
}