#include<bits\stdc++.h>
using namespace std;
int main()
{

   long long int n,tamp1,tamp2,coin,dimond;
   char ch;
   int j,k;
   j=0;
   k=0;
   cin>>n>>coin>>dimond;
   for(int i=0;i<n;i++)
   {
       cin>>tamp1>>tamp2>>ch;
       if(ch=='C')
       {
           c[j][0]=tamp1;
           c[j][1]=tamp2;
           j++;
       }
       else if(ch=='D')
       {

           d[k][0]=tamp1;
           d[k][1]=tamp2;
           k++;

       }
   }


return 0;
}
