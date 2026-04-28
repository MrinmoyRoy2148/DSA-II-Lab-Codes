#include<iostream>
using namespace std;
void RevInt(int a[],int i)
{
    if(i<0) return ;
    cout<<a[i]<<endl;
    RevInt(a,i-1);
}
void RevString(string a[],int i)
{
    if(i<0) return ;
    cout<<a[i]<<endl;
    RevString(a,i-1);
}
int main()
{
    int num[]={10,30,40,50,60,70,80,90};
    int n1=8;
    string name[]={"rose","erwin","bob","ht","bb"};
    int n2=5;
    cout<<"Reversed Int:"<<endl;
    RevInt(num,n1-1);
    cout<<"Reversed String"<<endl;
    RevString(name,n2-1);


}
