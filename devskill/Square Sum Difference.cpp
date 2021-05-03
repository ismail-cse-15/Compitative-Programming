#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

    ll n,sum1,sum2,sum3;
    cin>>n;
    sum1=(n*(n+1)*((2*n)+1))/6;
    sum2=(n*(n+1))/2;
    sum3=(sum2*sum2);
    cout<<abs(sum1-sum3)<<endl;
    }
    return 0;
}
