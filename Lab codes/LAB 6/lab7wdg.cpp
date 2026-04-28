
#include<bits/stdc++.h>
#include<climits>
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
            graph[i][j]=INT_MAX;
        }
    }
    for(int i=0;i<edges;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u][v]=w;
       // graph[v][u]=1;for directed this line no need
       graph[v][u]=w;
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
