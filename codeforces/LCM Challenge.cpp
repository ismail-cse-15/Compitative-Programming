#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")
#define FOR(a,b) for(int i=1;i<=b;i++)
long long int gcd(long long int a,long long int b )
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
int main()
{
    long long int a[10],n,tamp,tamp1,tamp2;
    cin>>n;
    if(n>3){

            tamp1=(n*(n-1))/gcd(n,(n-1));
            a[0]=(tamp1*(n-2))/gcd(tamp1,(n-2));

            tamp1=(n*(n-1))/gcd(n,(n-1));
            a[1]=(tamp1*(n-3))/gcd(tamp1,(n-3));

            tamp1=((n-2)*(n-1))/gcd((n-2),(n-1));
            a[2]=(tamp1*(n-3))/gcd(tamp1,(n-3));

            sort(a,a+3);
            cout<<a[2]<<endl;
    }
    else if(n==3)
        cout<<6<<endl;
    else
         pfi(n),pn;
return 0;
}
