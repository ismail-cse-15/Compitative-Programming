#include<bits\stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      long long int total=0,sum=0;
      long long int L,v,l,r;
      cin>>L>>v>>l>>r;
      total=L/v;
      sum=(r/v)-(l/v);
      total=total-sum;
      if(l%v==0)
        total-=1;
      cout<<total<<endl;

  }



    return 0;
}

