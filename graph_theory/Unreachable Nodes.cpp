#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100050];
bool visited[100050];
void dfs(int source)
{
    visited[source]=true;
    for(int j=0;j<adj[source].size();j++)
    {
        if(visited[adj[source][j]]==false)
            dfs(adj[source][j]);
    }
}
int main()
{
    int node,edge,headnode,unvisited_node=0;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    cin>>headnode;
    dfs(headnode);
    for(int i=1;i<=node;i++)
    {
        if(visited[i]==false)
        unvisited_node++;

    }
    cout<<unvisited_node<<endl;

}
