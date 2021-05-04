#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector< pair< int,int> >adj[100];
int main()
{
   int node,edge,weight,u,v;
    cout<<"Enter the no of node and edge"<<endl;
   cin>>node>>edge;
    cout<<"Enter the edge's and weight's pair"<<endl;
   for(int i=1;i<=edge;i++)
   {
       cin>>u>>v>>weight;
       adj[u].push_back(make_pair(v,weight));
       adj[v].push_back(make_pair(u,weight));
   }
   for(int i=1;i<=node;i++)
   {
       for(int j=0;j<adj[i].size();j++)
       cout<<"node "<<i<<" is connected with node "<<adj[i][j].first<<" by weight "<<adj[i][j].second<<endl;
   }
}
