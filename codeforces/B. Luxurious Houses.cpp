#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long int n,h[100010],current_max=0,a[100010];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>h[i];
        current_max=h[n];
        a[n]=0;
       // cout<<current_max<<endl;
    for(int i=n-1;i>=1;i--)
    {
       if(h[i]>current_max)
            {
            current_max=h[i];
           a[i]=0;
            }
       else
       {
         a[i]=current_max-h[i]+1;

       }
        //cout<<current_max<<endl;
    }
for(int i=1;i<n;i++)
    cout<<a[i]<<" ";
cout<<a[n]<<endl;


    return 0;
}

