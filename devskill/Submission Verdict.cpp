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
    string s;
    ind(T);
    for(int i=1;i<=T;i++)
    {

        cin>>s;
        if(s=="ac")
            cout<<"Accepted";
        else if(s=="wa")
            cout<<"Wrong Answer";
        else if(s=="rte")
            cout<<"Run Time Error";
        else
            cout<<"Time Limit Exceeded";
        cout<<endl;
    }
    return 0;
}
