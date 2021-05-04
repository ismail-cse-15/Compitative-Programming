#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define in(x) scanf("%d",&x);
#define inc(x) scanf("%c",&x);
#define outd(x) printf("%d",x);
#define outn(n) printf("\n");
#define outs() printf(" ");
#define outline(x) printf("x");
#define inll(x) scanf("%lld",&x);
vector< pair<int,char> >node[100];
int main()

{
    int t;
    in(t);
    while(t--)
    {
        int n;
        long long int x,a[10010],present_water=0;
        int no_of_bottle=0;
        in(n);
        inll(x);
        for(int i=0;i<n;i++)
        {
            inll(a[i]);
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            present_water+=a[i];
            if(present_water>x)
                break;
            no_of_bottle++;
        }
        outd(no_of_bottle);
        outn();

    }
}
