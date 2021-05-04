#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool matrix[200][200];
vector<int>edj[200];
int main()
{
    int node,edge;
    cout<<"Enter the no of node and no of edge"<<endl;
    cin>>node>>edge;
    cout<<"Enter the edge's pair"<<endl;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        edj[x].push_back(y);
        edj[y].push_back(x);
        matrix[x][y]=true;
        matrix[y][x]=true;
    }
    cout<<"Graph representation by adjacency matrix"<<endl;
    for(int i=1;i<=node;i++)
    {

        for(int j=1;j<=node;j++)
        {

                cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}
