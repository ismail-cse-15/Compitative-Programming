#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool edj[1050][1050];
int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        edj[x][y]=true;
        edj[y][x]=true;
    }
    int queries;
    cin>>queries;
    for(int i=0;i<queries;i++)
    {
        int a,b;
        cin>>a>>b;
        if(edj[a][b]==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
