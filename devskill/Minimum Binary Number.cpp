#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  int n,z=0,o=0;
  cin>>n;
  cin>>s;
  for(int i=0;i<n;i++)
  {
     if(s[i]=='0')
        z++;
     else
       o++;
  }
  if(o>=1)
  {
     cout<<1;
  for(int i=0;i<z;i++)
    cout<<0;
  }
  else
    cout<<0;

  cout<<endl;


    return 0;

}

