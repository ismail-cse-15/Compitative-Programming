#include<bits/stdc++.h>
using namespace std;
long long int bigmod(long long int b,long long int p,long long int m)
{
  long long int x;
  if(p==0)
    return x=1%m;
  x=bigmod(b,p/2,m);
  x=((x%m)*(x%m))%m;
  if(p%2==1)
    x=((x%m)*(b%m))%m;
    return x;
}
int main()
{
    long long int p;
    cin>>p;
    cout<<bigmod(1378,p,10)<<endl;

    return 0;
}
