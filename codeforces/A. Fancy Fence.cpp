#include<bits/stdc++.h>
using namespace std;
int flag_array[5010];
int main()
{

    int t;
    cin>>t;

   for(int i=1;i<=t;i++)
   {
   int a,e_angle,int_angle,n;
    cin>>a;
   int_angle=a;
   e_angle=180-int_angle;
   n=360/e_angle;
   //cout<<i<<" : ";
   if(n*e_angle==360)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
   }



    return 0;
}


