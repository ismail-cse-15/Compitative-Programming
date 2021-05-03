#include<bits/stdc++.h>
using namespace std;
int h[100018],m[100018];
#define ll long long

#define sci(x) scanf("%d",&x)

#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)

#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

int main()
{
    int n,s[100018],c=1,l;
    sci(n);
    for(int i=1,k=0;i<=n;i++)
    {

        sci(h[i]);
        sci(m[i]);
        if((h[1]==0)&&(m[1]==0)&&(i==1))
            c=0;
        if((h[i]==h[i-1])&&(m[i]==m[i-1]))
            c+=1;
        else
        {
            s[k]=c;
            c=1;
            k++;
        }

         if(i==n)
        {
            s[k]=c;
            k++;
             l=k;
        }
    }

    sort(s,s+l);
    pfi(s[l-1]);
    pn;
    return 0;
}
