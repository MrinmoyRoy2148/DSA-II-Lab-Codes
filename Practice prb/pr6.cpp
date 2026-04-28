#include<iostream>
using namespace std;
int main()
{
    int scores[]={55,72,88,91,64,91};
    int n=6;
    int bestIndex=0;
    for(int i=0;i<n;i++)
    {
        if(scores[i]>scores[bestIndex])
            {
                bestIndex=i;
            }
    }
    cout<<"Highest Scores="<<scores[bestIndex]<<"At Index"<<bestIndex<<endl;
    return 0;
}
