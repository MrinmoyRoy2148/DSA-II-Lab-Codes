#include<iostream>
using namespace std;
int main()
{
    int n=5;
    string Employee[]={"Alice","Bob","Edwin","Sara","Rose"};
    string name;
    cout<<"Enter The name of the Employee"<<endl;
    cin>>name;
    int foundIndex=-1;
    for(int i=0;i<n;i++)
    {
        if(Employee[i]==name)
        {
            foundIndex=i;
            break;
        }
    }
    if(foundIndex==-1)
    {
        cout<<"not Found"<<endl;
    }
    else
    {
        cout<<"name found at index:"<<foundIndex<<endl;
    }
    return 0;
}
