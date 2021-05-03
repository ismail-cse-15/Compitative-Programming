#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
int main()
{
    long long int t,n,d1,d2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d1=(n*(n+1))/2;
        d2=(n*(n+1)*((2*n)+1))/6;
        cout<<abs(d2-(d1*d1))<<endl;
    }
    return 0;
}
