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
bool prime[10500];
int main()
{
    for(int i=2;i<=sqrt(10500);i++)
    {
        if(prime[i]==false)
        {
            for(int j=(i*2);j<=10500;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    prime[0]=true;
    prime[1]=true;
    int T;
    ind(T);
    for(int i=1;i<=T;i++)
    {
        int N;
        ind(N);
        if(prime[N]==false)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
