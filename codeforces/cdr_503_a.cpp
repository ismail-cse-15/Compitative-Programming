#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,h,a,b,k,t1[10010],t2[10010],f1[10010],f2[10010],time=0;
    cin>>n>>h>>a>>b>>k;
    for(long long int i=1;i<=k;i++)
    {
       cin>>t1[i]>>f1[i]>>t2[i]>>f2[i];
       if(t1[i]==t2[i])
       {
          time=f1[i]-f2[i];
          time=abs(time);
          cout<<time<<endl;
       }

       else if(f1[i]>=a && f1[i]<=b)
       {
           time=abs(t1[i]-t2[i])+abs(f1[i]-f2[i]);
           cout<<time<<endl;
       }
       else{


        long long int x,y,z,time1=0,time2=0;
        x=f1[i]-a;
        y=f1[i]-b;
        z=t1[i]-t2[i];
        x=abs(x);
        y=abs(y);
        z=abs(z);


          time1=x+z+abs(a-f2[i]);
          time2=y+z+abs(b-f2[i]);
          if(time1<time2)
            cout<<time1<<endl;
          else
            cout<<time2<<endl;




       }
    }

    return 0;
}

