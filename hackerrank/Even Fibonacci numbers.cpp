#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")
int main()
{
    int t;
    sci(t);
    while(t--)
    {
     long long int n,fibo[100],sum=2;
    cin>>n;
     fibo[0]=1;
     fibo[1]=2;
     for(int i=2;fibo[i-1]<=n;i++)
     {
         fibo[i]=fibo[i-1]+fibo[i-2];
         if((fibo[i]%2==0)&&(fibo[i]<=n)){
            sum+=fibo[i];
         }}
     cout<<sum<<endl;
    }
    return 0;
}


