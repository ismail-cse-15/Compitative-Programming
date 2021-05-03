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
    for(int i=1;i<=T;i++)
    {
        int n;
        ind(n);
        if(n==1 || n==3)
            cout<<"Case "<<i<<"-> "<<"YES;"<<endl;
        else
            cout<<"Case "<<i<<"-> "<<"NO;"<<endl;

    }
    return 0;

}
