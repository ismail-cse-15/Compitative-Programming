#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")
#define FOR(a,b) for(int i=1;i<=b;i++)
int main()
{
    int n;
    vector<int>prime;
    sci(n);
    bool mark[1000000];
    memset(mark,true,sizeof(mark));
    for(int i=2;i<sqrt(n)+1;i++)
    {
        if(mark[i]==true)
        {
            for(int j=i*2;j<=n;j+=i)
                mark[j]=false;
        }
    }
    mark[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(mark[i]==true)
            prime.push_back(i);
    }
    for(int i=n-1;i>=(n/2);i--)
    {
        if(((mark[i]==false)&&(mark[n-i]==false))&&((i>1)&&((n-i)>1)))
        {
            pfi(i),sp,pfi(n-i),pn;
            break;

        }
    }
    return 0;
}

