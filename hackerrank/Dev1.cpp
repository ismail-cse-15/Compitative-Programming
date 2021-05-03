#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")
#define ll long long int
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    ll n,term3,term5,term15;
    long double v3,v5,v15,total;
    cin>>n;
    term3=(n-1)/3;
    term5=(n-1)/5;
    term15=(n-1)/15;
    v3=((long double)(6+((term3-1)*3))/2)*term3;
    v5=((long double)(10+((term5-1)*5))/2)*term5;
    v15=((long double)(30+((term15-1)*15))/2)*term15;
    total=(v3+v5)-v15;
    cout<<(long long int)total<<endl;
    }
    return 0;
}
