#include<iostream>
using namespace std;
int main()
{
    int ids[]={14,13,44,56,70,65};
    int n=6;
    cout<<"Enter The Product IdS"<<endl;
    int x;
    cin>>x;
    int l=0,r=n-1,index=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(ids[mid]==x)
        {
            index=mid;
            break;
        }
        else if(ids[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(index==-1){cout<<"Product not found"<<endl;}
    else
    {
        cout<<"Product Found At Index:"<<index<<endl;

    }
    return 0;
}
