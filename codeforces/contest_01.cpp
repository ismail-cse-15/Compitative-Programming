#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int x,y,z,t1,t2,t3,stair,elavator;
  cin>>x>>y>>z>>t1>>t2>>t3;
  stair=abs(x-y)*t1;
  elavator=(abs(x-z)*t2)+(3*t3)+(abs(x-y)*t2);
  if(elavator<=stair)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

    return 0;
}

