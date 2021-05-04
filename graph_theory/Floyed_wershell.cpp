#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int adj[200][200],next[100][200];
void find_path(int start,int destinition)
{
    queue<int>my_path;
    my_path.push(start);
    int i=start;
    while(i!=destinition)
    {
        i=next[i][destinition];
        my_path.push(i);
    }
    cout<<my_path.front();
        my_path.pop();
    while(!my_path.empty())
    {
        cout<<" "<<my_path.front();
        my_path.pop();
    }
    cout<<endl;
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            if(i==j)
                adj[i][j]=0;
            else
                adj[i][j]=1000000;
        }
    }
    for(int i=1;i<=edge;i++)
    {
        int x,y,weight;
        cin>>x>>y>>weight;
        adj[x][y]=weight;
    }
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            next[i][j]=j;
        }
    }
    for(int k=1;k<=node;k++)
    {
        for(int i=1;i<=node;i++)
        {
            for(int j=1;j<=node;j++)
            {
                if(adj[i][k]+adj[k][j]<adj[i][j]){
                    adj[i][j]=adj[i][k]+adj[k][j];
                    next[i][j]=next[i][k];
                }
            }
        }
    }
    cout<<"adjency matrix for shortest path"<<endl;
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            if(adj[i][j]>=1000000)
                cout<<"i"<<" ";
            else
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            cout<<"path from "<<i<<" to "<<j<<":"<<endl;
          find_path(i,j);
        }

    }

}
