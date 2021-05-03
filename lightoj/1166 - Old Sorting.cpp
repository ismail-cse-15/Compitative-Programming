#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ind(x) scanf("%d",&x);
#define inc(x) scanf("%c",&x);
#define outd(x) printf("%d",x);
#define outn(n) printf("\n");
#define outs() printf(" ");
#define outline(x) printf("x");
#define inll(x) scanf("%lld",&x);
int main()
{
   int T;
   ind(T);
   for(int t=1;t<=T;t++)
   {
       int n,a[110],no_of_position=0,swa;
       ind(n);
       for(int i=1;i<=n;i++)
       {
           ind(a[i]);
           if(a[i]!=i)
            no_of_position++;
       }
       if(no_of_position%2==0)
        swa=no_of_position/2;
       else
        swa=(no_of_position/2)+1;
       printf("Case %d: %d\n",t,swa);

   }
   return 0;
}
