#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[200];
bool visited[200];
int level[200];

void bfs(int source,int node)
{
queue<int>running_node;
running_node.push(source);
visited[source]=true;
level[source]=0;

while(!running_node.empty())
{
    int working_node;
    working_node=running_node.front();
    running_node.pop();
    cout<<">>"<<working_node;
    for(int j=0;j<adj[working_node].size();j++)
    {
        if(visited[adj[working_node][j]]==false)
        {
            visited[adj[working_node][j]]=true;
            running_node.push(adj[working_node][j]);
            level[adj[working_node][j]]=level[working_node]+1;
        }
    }

}
}

int main()
{
    int node,edge,source;
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
    cout<<"Enter the source"<<endl;
    cin>>source;
    bfs(source,node);
    cout<<endl;
    cout<<"Node"<<"    "<<"Level"<<endl;
    for(int i=1;i<=node;i++)
        cout<<i<<"       "<<level[i]<<endl;

}
