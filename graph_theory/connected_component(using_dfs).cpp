#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[200];
bool visited[190];
void dfs(int source)
{
    visited[source]=true;
    cout<<">>"<<source;
    for(int j=0;j<adj[source].size();j++)
    {
        if(visited[adj[source][j]]==false)
        {
            dfs(adj[source][j]);
        }
    }
}
int main()
{
    int node,edge,connected_component=0;
    cout<<"Enter the no of node and edge"<<endl;
    cin>>node>>edge;
    cout<<"Enter the edge's pair"<<endl;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    for(int i=1;i<=node;i++)
    {
        if(visited[i]==false){
            connected_component++;
            dfs(i);
        }


    }
    cout<<endl;
    cout<<"the number of connected_component is "<<connected_component<<endl;

}
