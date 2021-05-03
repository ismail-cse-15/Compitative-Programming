#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long int x1,x2,v1,v2,ran=0;
   cin>>x1>>v1>>x2>>v2;
   if(x1<x2 && v1>v2)
    ran=1;
   if(x2<x1 && v1<v2)
    ran=2;
    if(ran==0)
        cout<<"NO"<<endl;
    else
    {
          for(int i=1;;i++)
   {
       x1=x1+v1;
       x2=x2+v2;
       if(x1==x2)
       {
           cout<<"YES"<<endl;
           break;

       }
   else {

    if(ran==1 && x1>x2)
    {
        cout<<"NO"<<endl;
        break;
    }


    if(ran==2 && x1<x2)
    {
        cout<<"NO"<<endl;
        break;
    }

   }
   }

    }

   return 0;
}
