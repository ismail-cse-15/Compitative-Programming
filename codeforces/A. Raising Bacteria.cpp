#include<bits\stdc++.h>
using namespace std;
long long int x[200010];
int main()
{
  long long int n,xi,result;
  cin>>n;
  x[0]=1;
  xi=(log10(n)/log10(2));
  for(int i=1;i<=39;i++)
  {
      x[i]=x[i-1]*2;
      //cout<<x[i]<<endl;
  }
  result=1+(n-x[xi]);
  cout<<result<< " "<< xi<<endl;






    return 0;
}




