#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int money;
int main()
{
    int n,coin[3010];
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>coin[i];
    }
    sort(coin,coin+n);
    int work=coin[0];
    for(int i=1;i<n;i++)
    {
        if(work==coin[i])
        {
            coin[i]++;
           money++;
        }

        work=coin[i];
    }
cout<<money<<endl;

    return 0;

}



