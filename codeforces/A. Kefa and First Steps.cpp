#include<bits/stdc++.h>
using namespace std;
 map < string,int > my_map;
 int flag[15];
int main()
{
  int n,a[100010],previous=1,present=1,running=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>a[i];
  }

  running=a[1];
  for(int i=2;i<=n;i++)
  {
      if(a[i]>=running)
      {
         running=a[i];
         present++;
      }

      else
      {
          previous=max(previous,present);
          present=1;
          running=a[i];
      }

  }
  previous=max(previous,present);
  cout<<previous<<endl;
    return 0;
}





