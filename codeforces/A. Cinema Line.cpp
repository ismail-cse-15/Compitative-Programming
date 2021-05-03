#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
 int twenty_five,fifty,hundrade,flag;
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

cin>>x;
        if(x==25)
            twenty_five++;
        else if(x==50)
        {
            if(twenty_five>=1)
            {
                twenty_five--;
                fifty++;
            }
            else
                flag=1;
        }
        else
        {
            if(fifty>=1 && twenty_five>=1)
            {
                fifty--;
                twenty_five--;
                hundrade++;
            }
            else if(fifty==0 && twenty_five>=3)
            {
                twenty_five-=3;
                hundrade++;
            }
            else
                flag=1;
        }
//cout<<x<<" "<<flag<<endl;

    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;

}

