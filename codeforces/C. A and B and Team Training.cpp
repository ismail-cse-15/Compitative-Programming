#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")

int main()
{
    int n,m,a,b,c,team=0;
    sci(n),sci(m);

    a=min(m,n);
    team=min(a,(m+n)/3);
    pfi(team),pn;
  return 0;
}
