#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector <int>adj[100];
bool visited[100];
stack <int>sciquence;
void dfs(int source)
{
    visited[source]=true;
    for(int i=0;i<adj[source].size();i++)
    {
        if(visited[adj[source][i]]==false)
            dfs(adj[source][i]);
    }
    sciquence.push(source);
}
int main()
{
    int node,edge,x,y,root_node;
    cin>>node>>edge;
    while(edge--)
    {
      cin>>x>>y;
      adj[x].push_back(y);

    }

    for(int i=1;i<=node;i++){
            if(visited[i]==false)
            dfs(i);
    }
     cout<<sciquence.top();
      sciquence.pop();
    while(!sciquence.empty()){
    cout<<" "<<sciquence.top();
    sciquence.pop();
    }
    cout<<endl;

}
