#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int s,t,a,b,m,n,apple[100010],orange[100010],c_apple=0,c_orange=0;

cin>>s>>t>>a>>b>>m>>n;
for(int i=1;i<=m;i++)
{
    cin>>apple[i];

    if((a+apple[i])>=s && (a+apple[i])<=t)
        c_apple++;

}
for(int i=1;i<=n;i++)
{
    cin>>orange[i];

     if((b+orange[i])>=s && (b+orange[i])<=t)
        c_orange++;
}

cout<<c_apple<<endl<<c_orange<<endl;

    return 0;
}
