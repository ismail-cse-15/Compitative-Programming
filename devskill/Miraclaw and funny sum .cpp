#include<bits/stdc++.h>
#define lf long double
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
         ll n,sum1=0,sum2=0,a[110];
         cin>>n;
         for(int j=0;j<n;j++)
         {
             cin>>a[j];
             sum1+=a[j];
             if((a[j]-j)>0)
                sum2+=(a[j]-j);
         }
         cout<<(sum1-sum2)<<endl;
    }
    return 0;
}
