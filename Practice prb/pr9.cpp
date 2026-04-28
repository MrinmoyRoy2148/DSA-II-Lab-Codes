#include <iostream>
#include <string>
using namespace std;
void swapStr(string &a,string &b){string t=a;a=b;b=t;}

int partitionArr(string a[],int low,int high)
{
    string pivot=a[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(a[j]<=pivot){i++;swapStr(a[i],a[j]);}

    }
    swapStr(a[i+1],a[high]);
    return i+1;

}
void quickSort(string a[],int low,int high)
{
    if(low<high)
    {
        int pi=partitionArr(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}
int main()
{
    string names[]={"Zara","Anik","Bithi","Farhan","Dolon"};
    int n=5;
    cout<<"Before";
    for(int i=0;i<n;i++)
        cout<<names[i]<<" "<<endl;
    quickSort(names,0,n-1);
    cout<<"after:"<<endl;
    for(int i=0;i<n;i++)
        cout<<names[i]<<" "<<endl;
    return 0;
}
