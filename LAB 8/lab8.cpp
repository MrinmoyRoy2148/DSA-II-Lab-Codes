#include<bits/stdc++.h>
using namespace std;
vector<int> parent,rank_set;
void make_set(int v) {
    parent[v] = v;
    rank_set[v] = 0;
}

int find_set(int v)
{
if(v==parent[v])

return v;
parent[v]=find_set(parent[v]);
return parent[v];

}
void union_set(int a,int b)
{
    a=find_set(a);
    b=find_set(b);
    if(a!=b)
    {
        if(rank_set[a]<rank_set[b])
        {

            parent[a]=b;
        }

        else
        {
            parent[b]=a;

        if(rank_set[a]==rank_set[b]){
        rank_set[a]++;
    }
    }
    }
}
struct edge
{
    int u,v,w;
};

int main()
{
int x,y;
cout<<"enter the number of vertex and edges"<<endl;
cin>>x>>y;
vector<edge>graph(y);
cout<<"Enter edges(u,v,w)"<<endl;
for(int i=0;i<y;i++)
{
    cin>>graph[i].u>>graph[i].v>>graph[i].w;
}
parent.resize(x+1);
rank_set.resize(x+1);
for(int i=1;i<=x;i++){make_set(i);}
for(int i=0;i<y-1;i++)
{
    for(int j=0;j<y-i-1;j++)
    {
        if (graph[j].w > graph[j + 1].w) {
            swap(graph[j], graph[j + 1]);
    }
}
}
int cost=0;
for(int i=0;i<y;i++){
int u=graph[i].u;
int v=graph[i].v;
int w=graph[i].w;

if (find_set(u)!=find_set(v)){
    cout<<u<<" "<<v<<" "<<w<<endl;
cost+=w;
union_set(u,v);
}}
cout<<cost<<endl;
}
