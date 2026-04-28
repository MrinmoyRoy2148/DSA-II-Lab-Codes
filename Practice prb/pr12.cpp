#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name[]={"Rahim","Karim","Anika","Bithi","Farhan"};
    int mark[]={85,92,92,85,70};
    int n=5;
    for(int pass=0;pass<n-1;pass++){
        for(int i=0;i<n-1-pass;i++)
    {
        int needswap=0;
        if(mark[i]<mark[i+1])needswap=1;
        else if(mark[i]==mark[i+1]&&name[i]>name[i+1])needswap=1;
        if(needswap)
        {
            int twpm=mark[i];
            mark[i]=mark[i+1];
            mark[i+1]=twpm;
            string tmpN = name[i]; name[i] = name[i+1]; name[i+1] = tmpN;
        }
    }
    }


for (int i = 0; i < n; i++) cout << name[i] << " " << mark[i] << "\n";
return 0;}

