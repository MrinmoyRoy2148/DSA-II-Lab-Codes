#include<iostream>
using namespace std;
int main()
{
    int a[]={1,1,2,2,2,3,4,5};
    int n=8;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(k==0||a[i]!=a[k-1])
        {
            a[k]=a[i];

            k++;
        }

    }
    cout<<"cleaned List:"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}
