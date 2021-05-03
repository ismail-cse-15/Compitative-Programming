#include<bits/stdc++.h>
using namespace std;
int n,m,boy[110],girl[110];
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>boy[i];
  }



 cin>>m;
  for(int i=1;i<=n;i++)
  {
      cin>>girl[i];
  }
int no_of_pair=0;
  for(int i=1;i<=n;)
  {
      if(girl.find(boy[i]))
      {
          no_of_pair++;
          i++;
      }
  }
    return 0;
}

