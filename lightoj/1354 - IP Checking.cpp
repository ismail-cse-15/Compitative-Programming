#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define in(x) scanf("%d",&x);
#define inc(x) scanf("%c",&x);
#define outd(x) printf("%d",x);
#define outn(n) printf("\n");
#define outs() printf(" ");
#define outline(x) printf("x");
int decimal(int x)
{
    int bin=0,i=0,tamp;

    while(x!=0)
    {
        tamp=x%10;
        bin+=tamp*pow(2,i);
        x/=10;
        i++;
    }
    return bin;
}
int main()
{
  int T;
    in(T);
    char ch1,ch2,ch3,ch4,ch5,ch6;
    int a,b,c,d,a1,b1,c1,d1,l,m,n,o;
    for(int t=1;t<=T;t++)
    {
        in(a);
        inc(ch1);
        in(b);
        inc(ch2);
        in(c);
        inc(ch3);
        in(d);
        in(a1);
        inc(ch4);
        in(b1);
        inc(ch5);
        in(c1);
        inc(ch6);
        in(d1);

   l=decimal(a1);
   m=decimal(b1);
   n=decimal(c1);
   o=decimal(d1);
   if(l==a && m==b && n==c && o==d)
    printf("Case %d: Yes\n",t);
    else
        printf("Case %d: No\n",t);
    }
    return 0;
}
