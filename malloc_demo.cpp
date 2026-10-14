#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int *a=(int *)malloc(n*sizeof(int));

    a[0]=100;
    cout<<"第0格="<<a[0]<<endl;
    free(a);
    return 0;
    
}