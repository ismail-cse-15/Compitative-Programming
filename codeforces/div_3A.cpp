#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{
int t,k,l=0,mid,last;
string m,n;
char ch1,ch2;
cin>>t>>k;
cin>>m;
n="";
ch1=m[0];
for(int i=1;i<m.length();i++)
{
    if(s[i]==ch1)
    {
        l=i;
        break;
    }
}
if(l==0)
{
    for(int i=1;i<=k;i++)
        n+=m;
    cout<<m<<endl;
}
else
{
   for(int i=1;i<l;i++)
   {
       bool find_=false;
       for(int j=l+1;j<m.length();j++)
       {
        if(m[i]==m[j])
           {
               find_=true;
                break;

           }
       }
       if(find_==false)
        n+=m[i];
   }
}




    return 0;

}



