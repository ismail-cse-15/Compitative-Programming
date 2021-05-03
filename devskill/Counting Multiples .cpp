#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    ll n,k,up=1,low,a[10][10];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        up*=10;
        low=up/10;

      up-=1;
      if(low%k==0)
      {
          cout<<(((up/k)-(low/k))+1)<<endl;

      }
      else
        cout<<((up/k)-(low/k))<<endl;
    }
    return 0;
}
