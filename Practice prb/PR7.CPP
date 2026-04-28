#include<iostream>
using namespace std;
int main()

{
    double price[100]={9.99,12.50,12.50,15.00,18.75};
    int n=5;
    cout<<"Enter new Price";
    double p;cin>>p;
    int pos=n;
    for(int i=0;i<n;i++){
    if(p<price[i]){pos=i;break;}
    }
        for(int i=n;i>pos;i--)
            price[i]=price[i-1];
        price[pos]=p;
        n++;
        cout<<"update price:";
        for(int i=0;i<n;i++)
            cout<<price[i]<<endl;

        return 0;
}
