#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int store[110],j;

int main()
{
   int n,m,x,counter=0;

   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
       cin>>x;
       if(x<0)
       {
           store[j]=x;
           j++;
       }
   }
   int sum=0;
sort(store,store+j);
for(int k=0;k<j;k++)
{
 sum+=abs(store[k]);
    counter++;
    if(counter==m)
        break;
//cout<<store[k]<<endl;
}

cout<<sum<<endl;
    return 0;

}




