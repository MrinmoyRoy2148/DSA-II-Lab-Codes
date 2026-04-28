#include<iostream>
using namespace std;
int Sum(int a[],int n)
{
    if(n==0) return 0;
    return a[n-1]+Sum(a,n-1);
}
int main()
{
    int a[]={2,3,4,5,6,7};
    int n=6;
    cout<<"Sum="<<Sum(a,n)<<endl;
}
