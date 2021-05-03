#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a[3000],sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<k;i++)
        sum+=a[i];
    cout<<sum<<endl;
    return 0;
}
