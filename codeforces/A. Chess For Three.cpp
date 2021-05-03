#include<bits/stdc++.h>
using namespace std;
bool select(int x,int y,int z)
{

    return ((x==y) || (x==z));
}
int main()
{
    int n,s,l,flag=1;
    queue<int>x;
    scanf("%d",&n);
    s=n;
    while(s--)
    {
        scanf("%d",&l);
        x.push(l);
    }
    bool p;
    int y,z;
    y=1;
    z=2;
    for(int i=0;i<n;i++)
    {

       s=x.front();
       p=select(s,y,z);
       if(p==false)
       {
           flag=0;
           break;
       }
       else
       {
           int tamp=s;
           if(y+z==3)
           {
             y=tamp;
             z=3;
           }
            else if(y+z==4)
           {
             y=tamp;
             z=2;
           }
           else
           {
             y=tamp;
             z=1;
           }
           x.pop();

       }}
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
