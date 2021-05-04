#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> >adj[100];
bool visited[100];
int distnce[100];
int next[100];
void find_path(int start,int destinition)
{
    stack <int>my_path;
    my_path.push(destinition);
    int i=destinition;
    while(i!=start)
    {
        i=next[i];
        my_path.push(i);
    }
    cout<<my_path.top();
        my_path.pop();
    while(!my_path.empty())
    {
        cout<<" "<<my_path.top();
        my_path.pop();
    }
}
void modified_bfs(int node,int source)
{

    distnce[source]=0;
    priority_queue< pair<int,int>,vector<pair<int,int> > ,greater< pair<int,int> > >storage;
    storage.push(make_pair(0,source));
    int working_node;

    while(!storage.empty())
    {
      working_node=storage.top().second;

      storage.pop();
      for(int j=0;j<adj[working_node].size();j++)
      {
          if(distnce[working_node]+adj[working_node][j].second<distnce[adj[working_node][j].first]){
            distnce[adj[working_node][j].first]=distnce[working_node]+adj[working_node][j].second;
            next[adj[working_node][j].first]=working_node;

            storage.push(make_pair(distnce[adj[working_node][j].first],adj[working_node][j].first));


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
    //Relation between the pair of priority queue and the pair of adjency node,s vector
    //is lise as cross connection relation of twwo point
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
  for(int i=1;i<=node;i++){
    if(i!=source){
   cout<<source<<" to "<<i<<":"<<endl;
  find_path(source,i);
      }
  cout<<endl;
  }

}

