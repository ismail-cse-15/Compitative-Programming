#include<bits/stdc++.h>
using namespace std;
int n,m,boy[110],girl[110];
int main()
{
  int n,m,temp_m,a,bus_no=1;
  cin>>n>>m;
  temp_m=m;
  for(int i=1;i<=n;i++)
  {
      cin>>a;
      if(m>=a)
      {
       m-=a;
       //bus_no++;

      }
      else
      {
          bus_no++;
          m=temp_m;
         //if(m>=a)
      //{

       m-=a;
      //}
      }

      //cout<<bus_no<<endl;
  }
  cout<<bus_no<<endl;


  return 0;
}


