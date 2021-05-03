#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define in(x) scanf("%d",&x);
#define inc(x) scanf("%c",&x);
#define outd(x) printf("%d",x);
#define outn(n) printf("\n");
#define outs() printf(" ");
#define outline(x) printf("x");
int main()
{
    int T;
    in(T);
    int n,p,q,x,total,egg;
    for(int t=1;t<=T;t++)
    {
        in(n);
        in(p);
        in(q);
        egg=0;
        total=0;
        for(int i=1;i<=n;i++)
        {

            in(x);
            total+=x;
             if(total<=q && egg<p)
                egg++;


        }
         printf("Case %d: %d\n",t,egg);
    }
}
