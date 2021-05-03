#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
  ll n,line,extra;
  cin>>n;
  line =(sqrt(1+(8*n))-1)/2;
  extra=n-(line*(line+1))/2;
  cout<<line<<endl;
  cout<<extra<<endl;
    }
    return 0;
}
