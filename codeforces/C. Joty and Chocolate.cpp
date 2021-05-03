#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")
#define FOR(a,b) for(int i=1;i<=b;i++)
long long int gcd(long long int a,long long int b )
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
int main()
{
    long long int n,a,b,p,q,da,db,dc,coca,cocb,suba,subb,tot[10],lcm;
    cin>>n>>a>>b>>p>>q;
    da=n/a;
    db=n/b;
    lcm=(a*b)/gcd(a,b);
    dc=n/lcm;


    coca=(da*p);
    cocb=(db*q);
    suba=(da-dc)*p;
    subb=(db-dc)*q;
    tot[0]=coca;
    tot[1]=cocb;
    tot[2]=(coca+subb);
    tot[3]=(cocb+suba);
    sort(tot,tot+4);
    cout<<tot[3]<<endl;
    return 0;
}
