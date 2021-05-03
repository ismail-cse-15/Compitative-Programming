#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
   long long int n,m,k,row=1,col=1,d;
   cin>>n>>m>>k;
   d=m-1;
   if(k<n)
   {
       row=k+1;
   }
   else
   {
       k=k-(n-1);
       row=n;
       for(int i=0;;)
       {
           if(k>0 && (k-d)>=0)
           {
            k=k-d;
           row=row-1;
           i++;
           }
           else if(k==0)
           {
               if(i%2==1)
               {
                   row++;
                   col=m;
               }
               else
               {
                   row++;
                col=2;
               }
               i++;
               break;
           }
           else
           {
               if(i%2==1)
               {
                   col=m-(k-1);
               }
               else
               {
                col=m-(k-1);
               }
               i++;
               break;

           }

       }

   }
   cout<<row<<" "<<col<<endl;

    return 0;

}

