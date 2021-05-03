#include<bits/stdc++.h>
using namespace std;
int index[200020];
int main()
{

long long int n,T,sum=0,n_of_turn,total=0,x=0,value;
vector < long long int > a,b;

cin>>n>>T;
for(int i=1;i<=n;i++)
{
    cin>>value;
    if(a[i]<=T)
    {
      sum+=value;
      a.push(value);
      b.push(value);
      b[x]=a[i];
      x++;

    }

}
sort(b,b+x);
n_of_turn=T/sum;
total+=(x*n_of_turn);
T=T-(n_of_turn*sum);
//cout<<T<<" "<<total<<endl;
for(int i=0;i<x;i++)
{

  if(T>=b[i])
  {
      total++;
      T-=a[i];
  }
}
cout<<total<<endl;

    return 0;
}








