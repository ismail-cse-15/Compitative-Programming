#include<bits/stdc++.h>
using namespace std;
int main()
{


  long long int s,a,b,c,total_buy,total_free,total_get,t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
cin>>s>>a>>b>>c;
  total_buy=s/c;
  total_free=(total_buy/a)*b;
  total_get=total_buy+total_free;
  cout<<total_get<<endl;
  }


    return 0;
}

