#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l[100010],r[100010],L=0,R=0,Beauty1;
    vector<long long int>beauty,cop;
    vector<long long int>::iterator it;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
        L+=l[i];
        R+=r[i];
    }
    Beauty1=abs(L-R);
    for(int i=1;i<=n;i++)
    {
        long long int a,b;
        a=L-l[i]+r[i];
        b=R-r[i]+l[i];
        beauty.push_back(abs(a-b));
    }
    cop=beauty;
    sort(beauty.begin(),beauty.end());
    if(Beauty1>=beauty[n-1])
        cout<<0<<endl;
    else
    {

        it=find(cop.begin(),cop.end(),beauty[n-1]);
        cout<<((it-cop.begin())+1)<<endl;
    }
    return 0;
}
