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
        long long int n,a,b,c;
        cin>>n;
        a=(n*n);
        b=(n+1)*(n+1);
        c=(a*b)/4;
        cout<<"Case "<<i<<": "<<c<<endl;

    }

return 0;
}
