#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>inp;
int graph[31000][10];
int vesited[100000];
void dfs(int s)
   {
     vesited[s]=1;
        if(graph[s][0]==0)
            return;

        dfs(graph[s][0]);

   }
int main()
{
    int n,t;
    cin>>n>>t;
    inp.resize(n);


    for(int i=1;i<n;i++)
        cin>>inp[i];
    for(int i=1;i<n;i++){
          int v;
       v=inp[i]+i;
        graph[i][0]=v;
    }



   dfs(1);
    if(vesited[t]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;

}
