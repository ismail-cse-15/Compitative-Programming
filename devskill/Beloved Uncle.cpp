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
    long long int fibonacci[1000],x,n;
    int p;
    fibonacci[1]=1;
    fibonacci[2]=2;
    for(int n=3;;n++)
    {
      x=fibonacci[n-1]+fibonacci[n-2];
      if(x<=pow(2,31)-1)
        fibonacci[n]=x;
      else
      {
        p=n;
        break;
      }
      //cout<<n<<" :"<<fibonacci[n]<<endl;

    }

   while(cin>>n)
   {

       for(int i=1;i<=45;i++)
       {
           if(n==fibonacci[i])


           {
           if(i>3)
            cout<<"Showmic brings "<<n<<" chocolate on "<<i<<"th day."<<endl;
           else if( i==3)
            cout<<"Showmic brings "<<n<<" chocolate on "<<i<<"rd day."<<endl;
           else if(i==2)
            cout<<"Showmic brings "<<n<<" chocolate on "<<i<<"nd day."<<endl;
            else
               cout<<"Showmic brings "<<n<<" chocolate on "<<i<<"st day."<<endl;


           }
       }
   }

    return 0;
}
