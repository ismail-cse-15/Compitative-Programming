#include<bits/stdc++.h>
using namespace std;
bool a[1000018];
void prime(int c){
 for( int i=2;i<=sqrt(c);i++)
     {
         if(a[i]==false)
         {
             for(int j=(2*i);j<=c;j+=i)
                a[j]=true;
         }
     }
}
int main()
{
   int c,n,d;
   long long int b[100018],e;

cin>>n;

a[1]=1;
prime(1000018);

for( int i=0;i<n;i++)
{
    cin>>b[i];
     d=sqrt(b[i]);
     e=((long long int )d*(long long int )d);

    if(e==b[i])
    {
        if(a[d]==false)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
return 0;
}
