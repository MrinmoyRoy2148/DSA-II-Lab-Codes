#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct job
{
    int Id,deadline,profit;
};
bool compare(job a,job b)
{
    return a.profit>b.profit;
}
int main()
{
    int n;
    cout<<"enter number of job";
    cin>>n;
    vector<job>Job(n);
    cout<<"enter jobs details(ID Deadline profit";
    for(int i=0;i<n;i++)
    {
        cin>>Job[i].Id>>Job[i].deadline>>Job[i].profit;
    }
    sort(Job.begin(),Job.end(),compare);
    int time;
    cout<<"Enter maximum Time";
    cin>>time;
    vector<int>schedule(time,-1);
    int total_profit=0;
    for(int i=0;i<n;i++)
    {
        for(int j=min(time-1,Job[i].deadline-1);j>=0;j--)
        {
            if(schedule[j]==-1)
            {
                schedule[j]=Job[i].Id;
                total_profit+=Job[i].profit;
                break;
            }
        }
    }
    cout<<"Scheduled job IDS:";
    for(int i=0;i<time;i++)
    {
        if(schedule[i]!=-1)
        {
            cout<<schedule[i]<<" ";
        }
    }
cout<<"\n Total_profit:"<<total_profit<<endl;
return 0;

}
