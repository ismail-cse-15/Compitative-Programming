#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int n,a,b;
        cin>>n;
        a=(n+1);
        b=(n*a)/2;
        cout<<b<<endl;
    }
    return 0;
}
