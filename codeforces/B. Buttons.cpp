#include<bits\stdc++.h>
using namespace std;
long long int x[200010];
int main()
{
  long long int n,sum_square,sum_natural1,sum_natural2,x,result;
  cin>>n;
  x=n-1;
  sum_natural1=(x*(x+1))/2;

  sum_square=(x*(x+1)*((2*x)+1))/6;
  result=(n*sum_natural1)-sum_square+n;
//  if(n==3)
//    cout<<"7"<<endl;
//  else
  cout<<result<<endl;






    return 0;
}



