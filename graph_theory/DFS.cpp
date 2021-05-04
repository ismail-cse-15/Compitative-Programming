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

            if(visited[adj[source][j]]==false){

                dfs(adj[source][j]);
            }
        }

}
int main()
{
    int node,edge;

    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
         adj[y].push_back(x);

    }
    dfs(1);


}
