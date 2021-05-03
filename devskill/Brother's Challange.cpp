#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,sum=0;
    cin>>n;
    for(int i=n-1;i>0;i--)
    {
        if((i%3==0)||(i%5==0))
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;

}
