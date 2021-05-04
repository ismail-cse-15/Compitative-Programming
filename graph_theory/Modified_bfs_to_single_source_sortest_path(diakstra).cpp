#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> >adj[100];
bool visited[100];
int distnce[100];
void modified_bfs(int node,int source)
{

    distnce[source]=0;
    queue<int>storage;
    storage.push(source);
            int working_node;
    while(!storage.empty())
    {
      working_node=storage.front();
      storage.pop();
      for(int j=0;j<adj[working_node].size();j++)
      {
          if(distnce[working_node]+adj[working_node][j].second<distnce[adj[working_node][j].first]){
            distnce[adj[working_node][j].first]=distnce[working_node]+adj[working_node][j].second;
            storage.push(adj[working_node][j].first);
          }
      }
    }
}
int main()
{
    int node,edge,source;
    int x,y,weight;
    cout<<"Enter the no of node and edge"<<endl;
    cin>>node>>edge;
    cout<<"Enter the edge's and weight's pair"<<endl;
    for(int i=1;i<=edge;i++)
    {
        cin>>x>>y>>weight;
        adj[x].push_back(make_pair(y,weight));
        adj[y].push_back(make_pair(x,weight));
    }
    cout<<"Enter the source"<<endl;

   cin>>source;
   for(int i=1;i<=node;i++)
    distnce[i]=1000;
   modified_bfs(node,source);
   cout<<"shortest distence from node "<<source<<endl;
   for(int i=1;i<=node;i++)
   {
       cout<<"to "<<i<<" is: "<<distnce[i]<<endl;
   }


}
