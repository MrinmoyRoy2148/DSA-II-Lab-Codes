#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
int n;
    int dp[sum+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0)
            {
                dp[i][j]=INT_MAX;
            }
            else if(j==0)
            {
                dp[i][j]=0;

            }
           else if (j < v[i-1] || dp[i][j - v[i-1]] ==INT_MAX)

            {
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j] = min(dp[i-1][j], 1 + dp[i-1][j-v[i-1]]);

            }
        }
    }
    if(dp[n][sum]==INT_MAX)
    {
        cout<<"not possible";
    }
    else
        cout<<dp[n][sum];

}
//for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
            {
                dp[i][j]=0;
            }
            else if(i>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],profit[i]+dp[i][j-i])
            }
        }
    }
