#include<bits/stdc++.h>
using namespace std;
 map < string,int > my_map;
 int flag[15];
int main()
{
  int n,tamp,reminder,indicator=0;
  cin>>n;
  for(int i=n+1;;i++)
  {
      tamp=i;
      indicator=0;
       memset(flag, 0, 11*sizeof(flag[0]));
      while(tamp!=0)
      {
        reminder=tamp%10;
        tamp/=10;
        flag[reminder]++;
        if(flag[reminder]>1)
        {
           indicator=1;
            break;
        }

      }
      if(indicator==0)
      {
          cout<<i<<endl;
          break;
      }
  }
    return 0;
}




