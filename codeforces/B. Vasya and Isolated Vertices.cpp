#include<bits/stdc++.h>
using namespace std;
int main()
{


  long long int n,m,maximum_connected,minimum_connected;
  cin>>n>>m;
  maximum_connected=(m*2);
  if(maximum_connected>n)
    cout<<0<<" ";
else if(m==1 && n>=2)
    cout<<n-2<<" ";

  else
    cout<<(n-maximum_connected)<<" ";

  minimum_connected=0;
  for(int i=1;i<=n;i++)
  {
      if(m==0)
      {
       minimum_connected=(i-1);
      // cout<<i<<endl;
       break;
      }

      else if(m<(i-1))
      {
        minimum_connected+=m;
        m=0;
if(i==n && i!=1)
    minimum_connected=i;
      }
      else
      {
        minimum_connected+=(i-1);
     m-=(i-1);
if(i==n && i!=1)
    minimum_connected=i;
      }

  }

cout<<(n-minimum_connected)<<endl;


    return 0;
}


