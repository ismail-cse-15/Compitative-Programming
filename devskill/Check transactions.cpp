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

    while(T--)
    {

        int n;
        long long int x,in_balance,final_balance;
        string s;
        inll(in_balance);
        inll(final_balance);
        ind(n);
        while(n--)
        {
            cin>>s;
            inll(x);
            if(s=="in")
                in_balance+=x;
            else
                in_balance-=x;
        }
        if(in_balance==final_balance)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;



}
