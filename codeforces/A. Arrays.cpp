#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int na,nb,k,m,a[100000],b[100000],c,p=0;
    cin>>na>>nb;
    cin>>k>>m;
    for(int i=0;i<na;i++)
        cin>>a[i];
     for(int i=0;i<nb;i++)
        cin>>b[i];
        c=a[k-1];
     for(int i=0;i<nb;i++)
     {
         if(c<b[i])

             p+=1;
          if(p==m)
                break;


     }
     if(p>=m)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
    return 0;
}

