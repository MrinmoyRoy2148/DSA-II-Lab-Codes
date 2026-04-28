#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vertices,edges;
    cout<<"Enter The Value Of Vertices and Edges"<<endl;
    cin>>vertices>>edges;
    int graph[vertices][vertices];
    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            graph[i][j]=0;
        }
    }
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
       // graph[v][u]=1;for directed this line no need
    }
    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            cout<<graph[i][j]<<" ";

        }
         cout<<endl;
    }

}
