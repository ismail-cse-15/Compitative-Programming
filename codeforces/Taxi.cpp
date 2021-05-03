#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sci(x) scanf("%d",&x)
#define scd(x) scanf("%lf",&x)
#define pfi(x) printf("%d",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

int main()
{
    int n,a[100010],one=0,two=0,three=0,four=0,taxi,remain1=0,taxi2,remain2;
    sci(n);
    for(int i=0;i<n;i++){
        sci(a[i]);
        if(a[i]==1)
        one+=1;
    else if(a[i]==2)
        two+=1;
    else if(a[i]==3)
        three+=1;
    else
        four+=1;
    }
    taxi2=two/2;

   taxi=four+three+taxi2;
   if(one>three)
   {

       remain1=one-three;
   }

   remain2=(two-(taxi2*2));
   if(remain2==0)
   {
       taxi+=ceil((double)remain1/4);
   }
   else
   {
       taxi+=1;
       if(remain1>2)
       {
           taxi+=ceil(((double)remain1-2)/4);
       }
   }
   pfi(taxi);
   pn;


    return 0;
}
