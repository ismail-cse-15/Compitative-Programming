#include<bits/stdc++.h>
using namespace std;
double distance(int a,int b,int c,int d)
{
    double x,y,l,de;
    x=abs((double)a-(double)c);
    y=abs((double)b-(double)d);
    l=(x*x)+(y*y);
    de=sqrt(l);
    return de;
}
int main()
{
 int T;
 scanf("%d",&T);
 for(int i=1;i<=T;i++)
 {
     int cx,cy,px,py;
     double r,di;
     scanf("%d %d %lf %d %d",&cx,&cy,&r,&px,&py);
     di=distance(cx,cy,px,py);
     if(di>r)
        printf("Case %d: Outside\n",i);
     else if(di<r)
        printf("Case %d: Inside\n",i);
        else
        printf("Case %d: OnCircle\n",i);

 }

}
