#include<bits/stdc++.h>
using namespace std;
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sci(x) scanf("%d",&x)

int main()
{
    long long int x,a,b,c;
    cin>>x;
    if(x>2){
    if(x%2==0)
    {
        long long int m,n;
        m=x/2;
        if(m%2==0){
            n=m/2;
            m=x/(2*n);
            if(n==m)
            {
                m=x/2;
                n=1;
            }
       }
        else
            n=1;
        b=(2*m*n);
        a=abs((m*m)-(n*n));
        c=(m*m)+(n*n);

        cout<<a<<" "<<c<<endl;
    }
    else
    {
      long long int m,n;
      m=(x+1)/2;
      n=m-1;
      a=(m*m)-(n*n);
      b=(2*m*n);
      c=(m*m)+(n*n);
      cout<<b<<" "<<c<<endl;
    }
    }
    else
        cout<<-1<<endl;
    return 0;
}
