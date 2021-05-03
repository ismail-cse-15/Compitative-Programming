#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=1;l<=t;l++){
    long long int r,c,sum=0,cost;
    cin>>r>>c;
    if(r==c)
        sum=(r*(r+1)*((2*r)+1))/6;
    else
    {
        for(int i=r,j=c;((i>0)&&(j>0));i--,j--)
        sum+=(i*j);
    }
    cost=sum*15;
    cout<<"Case "<<l<<": "<<cost<<endl;
    }
    return 0;
}
