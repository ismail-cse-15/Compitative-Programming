#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k,l=0;
    vector<ll>devisor;

    cin>>n>>k;
    devisor.push_back(n);
    for(long long int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            devisor.push_back(i);

          if(i!=n/i)
        {
            devisor.push_back(n/i);

        }

        }

    }
   sort(devisor.begin(),devisor.end());

    if(k<devisor.size())
        cout<<devisor[k-1]<<endl;
    else
        cout<<-1<<endl;

    return 0;
}
