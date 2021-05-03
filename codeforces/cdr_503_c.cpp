#include<bits/stdc++.h>
using namespace std;
long long int p[3010],c[3010],vote[3010],vote1[3010];
int main()
{
   long long  int n,m,party;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i]>>c[i];
        vote[p[i]]++;
        vote1[p[i]]++;

    }
    sort(vote1,vote1+m+1);
  if(vote1[m]==vote[1])
    cout<<"0"<<endl;



    return 0;
}



