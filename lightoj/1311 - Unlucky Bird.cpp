#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define in(x) scanf("%d",&x);
#define ind(x) scanf("%lf",&x);
#define inc(x) scanf("%c",&x);

#define outc(x) scanf("%c",x);
#define out(x) printf("%d",x);
#define outd(x) printf("%lf",x);

#define outn(n) printf("\n");
#define outs() printf(" ");
#define outline(x) printf("x");
int main()
{

    int T;
    in(T);
    double v1,v2,v3,a1,a2,t1,t2,s1,s2,d,bd;
    for(int i=1;i<=T;i++)
    {
        ind(v1);
        ind(v2);
        ind(v3);
        ind(a1);
        ind(a2);
      t1=(v1/a1);
      t2=(v2/a2);
      s1=(v1*t1)-(a1*t1*t1)/2.00;
      s2=(v2*t2)-(a2*t2*t2)/2.00;
      d=s1+s2;
      bd=max(t1,t2)*v3;
       printf("Case %d: %lf %lf\n",i,d,bd);
    }
    return 0;
}
