#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10000],b[10000],n,p=0,c,tamp;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            p=1;
            break;
        }
    }
    if(p==0)
    {
        c=0;

      for(int i=0;i<n;i++)
      {
          if(a[i]<a[i+1]){
            c=1;
            break;
          }
      }
      if(c==1)
        cout<<"unrated"<<endl;
      else
        cout<<"maybe"<<endl;

    }
    else
        cout<<"rated"<<endl;

    return 0;
}
