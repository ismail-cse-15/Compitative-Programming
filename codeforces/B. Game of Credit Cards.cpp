#include<bits/stdc++.h>
using namespace std;
int index[200020];
int main()
{

double n,k,divisor=0,result,sum=0,value,flag=0;
cin>>n>>k;
divisor=n;
for(int i=1;i<=n;i++)
{
    cin>>value;
    sum+=value;
    divisor++;



}
result=sum/divisor;
if(ceil(result)==k && ceil(result)-result<=0.50)
    cout<<0<<endl;
else
{
  for(int i=1;;)
  {
      sum+=k;
      divisor++;
      result=sum/divisor;
      if(ceil(result)==k && (ceil(result)-result)<=0.50)
      {
          flag=1;
          i++;
          break;
      }
      else if(result>k)
      {
          flag=1;
          i++;
          break;
      }
      else
        i++;

  }

  if(flag==1)
    cout<<(divisor)<<endl;
}


    return 0;
}









