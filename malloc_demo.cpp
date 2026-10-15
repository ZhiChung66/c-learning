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

    int i;
    int sum=0;
    for(i=0;i<n;i=i+1)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"总和="<<sum<<endl;
    free(a);
    return 0;
    
}