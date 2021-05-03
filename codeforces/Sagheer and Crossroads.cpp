#include<bits/stdc++.h>
using namespace std;
int flag[20];
int main()
{
    int l[5],s[5],r[5],p[5],f=0;
    for(int i=1;i<=4;i++)
        cin>>l[i]>>s[i]>>r[i]>>p[i];
   for(int i=1;i<=4;i++)
   {
       if(((l[i]==1)&&(p[i]==1))||((r[i]==1)&&(p[i]==1))||((s[i]==1)&&(p[i]==1)))
       {
           flag[0]=1;
           break;
       }
   }
   if(flag[0]==0)
   {
      if(((l[1]==1)&&(p[4]==1))||((r[1]==1)&&(p[2]==1))||((s[1]==1)&&(p[3]==1)))
        flag[1]=1;
      if(((l[2]==1)&&(p[1]==1))||((r[2]==1)&&(p[3]==1))||((s[2]==1)&&(p[4]==1)))
        flag[2]=1;
        if(((l[3]==1)&&(p[2]==1))||((r[3]==1)&&(p[4]==1))||((s[3]==1)&&(p[1]==1)))
        flag[3]=1;
      if(((l[4]==1)&&(p[3]==1))||((r[4]==1)&&(p[1]==1))||((s[4]==1)&&(p[2]==1)))
        flag[4]=1;
      for(int i=1;i<=4;i++)
      {
          if(flag[i]==1)
          {
              f=1;
              break;
          }
      }
      if(f==0)
        cout<<"NO"<<endl;
      else
        cout<<"YES"<<endl;
   }
   else
    cout<<"YES"<<endl;
    return 0;
}
