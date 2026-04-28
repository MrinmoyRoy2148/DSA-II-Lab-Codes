#include<bits/stdc++.h>
using namespace std;
struct item
{
    int w,p;

};
int findmax(int a,int b)
{
    return(a>b)?a:b;
}
int main()
{
    int n;
    cout<<"Enter Item number"<<endl;
    cin>>n;
    int cap;
    cout << "Enter Capacity:" << endl;
    cin>>cap;
item ara[n];
cout<<"Enter item weight And profit:"<<endl;
for(int i=0;i<n;i++)
{
    cin>>ara[i].w>>ara[i].p;
}
int dp[n+1][cap+1];
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=cap;j++)
    {
        if(i==0||j==0)
        {
            dp[i][j]=0;
        }
        else if( ara[i-1].w<=j)
          dp[i][j] = findmax(dp[i - 1][j], ara[i-1].p + dp[i - 1][j - ara[i-1].w]);

            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

      cout << "\nMaximum Profit = "<< dp[n][cap];
      int i = n, j = cap;
    cout << "Selected Items = ";

    while (i > 0 && j > 0) {
        if (dp[i][j] != dp[i - 1][j]) {
            cout << "Item " << i << " ";
            j -= ara[i - 1].w;
        }
        i--;
    }
    cout << endl;

    return 0;
}

