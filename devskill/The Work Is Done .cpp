#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double ct,p[120],sum,r;
    while(scanf("%lf %d",&ct,&n)!=EOF)
    {


        sum=0;

            for(int i=0; i<n; i++)
            {
                cin>>p[i];
                sum+=p[i];
            }

             r=ceil(ct/sum);
            cout<<"Project will finish within "<<r<<" days."<<endl;

    }
    return 0;
}
