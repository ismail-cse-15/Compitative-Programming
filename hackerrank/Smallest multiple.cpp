#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(a%b==0)
        return b;
    else return gcd(b,a%b);
}
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long int n,lcm,x;
      cin>>n;
      if(n>2){
            x=gcd(1,2);
            lcm=2/x;
      for(int i=3;i<=n;i++)
      {
         x=gcd(lcm,i);
         lcm=(lcm*i)/x;
      }
      cout<<lcm<<endl;
      }
      else
        cout<<n<<endl;

    }
    return 0;
}
