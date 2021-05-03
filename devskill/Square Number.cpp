#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    int n,a;
    cin>>n;
    a=sqrt(n);
    if(n==(a*a))
        cout<<"Case "<<i<<": "<<"YES"<<endl;
    else
        cout<<"Case "<<i<<": "<<"NO"<<endl;
    }
    return 0;
}
