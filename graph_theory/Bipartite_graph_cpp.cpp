#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define in(x) scanf("%d",&x);
#define inc(x) scanf("%c",&x);
#define outd(x) printf("%d",x);
#define outn(n) printf("\n");
#define outs() printf(" ");
#define outline(x) printf("x");
vector<int>adj[100];
queue<int>q;
int color[100];
bool bipartite;
 bool isbipartite()
 {
       while(!q.empty() && bipartite)
   {

   int working_node=q.front();
   q.pop();
       for(int i=0;i<adj[working_node].size();i++)
       {
           if(color[adj[working_node][i]]==-1){
            color[adj[working_node][i]]=1-color[working_node];

            q.push(adj[working_node][i]);
           }
           else if(color[adj[working_node][i]]==color[working_node]){
                cout<<adj[working_node][i]<<"ehceh"<<working_node<<endl;
               bipartite=false;
               return bipartite;
           }
       }
   }
 }
int main()
{
    int node,edge;
    cout<<"Enter the no of node and edge"<<endl;
    cin>>node>>edge;
    cout<<"Enter the edge's pair"<<endl;
    for(int i=1;i<=edge;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
     memset(color,-1,sizeof(color));


    color[1]=0;
    q.push(1);
    bipartite=true;
   isbipartite();
     if(bipartite==true)
        cout<<"Given Graph is Bipartite"<<endl;
     else
        cout<<"Given Graph is not Bipartite"<<endl;


}
