#include<bits\stdc++.h>
using namespace std;
int value[110];

int main()
{
   int n,m,arr[110];
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int s,d,x,e;
   for(e=0;e<m;e++)
   {
       x=arr[0];


       for(s=1,d=0;s<n;s++,d++)
       {
           arr[d]=arr[s];
       }
       arr[d]=x;
   }

   cout<<"after rotating "<<m<<" times"<<endl;
   cout<<arr[0];
   for(int i=1;i<n;i++)
    cout<<" "<<arr[i];
    cout<<endl;
    return 0;
}




