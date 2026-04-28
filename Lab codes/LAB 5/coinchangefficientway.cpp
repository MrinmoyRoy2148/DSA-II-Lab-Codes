#include<iostream>
#include <algorithm>
using namespace std;
int main()
{

    int n,sum;
    cout<<"Enter The number of coins:"<<endl;
    cin>>n;
    int v[n];
    cout<<"Enter The Values of the coins:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    cout<<"Enter The Target Sum:"<<endl;
    cin>>sum;

    int dp[sum+1];
    for(int j=0;j<=sum;j++)
    {
        dp[j]=INT_MAX;
    }
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=v[i];j<=sum;j++)
        {
            if(dp[j-v[i]]!=INT_MAX)
            {
                dp[j]=min(dp[j],dp[j-v[i]]+1);
            }
        }
    }

if (dp[sum]==INT_MAX)
{
    cout<<"not possible"<<endl;
}
else
{
    cout<<"minimum number of coins required :"<<dp[sum]<<endl;
}
return 0;
}
