#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{

int t;
cin>>t;
for(int i=1;i<=t;i++)
{
    long long int n,x,y,d,steps1,steps2;
    cin>>n>>x>>y>>d;
    if(y>x)
    {
      steps1=((x-1)/d)+((y-1)/d) ;
      if((x-1)%d>0)
        steps1+=1;
      if((y-1)%d>0)
        steps1+=1;
      steps2=(y-x)/d;
      if((y-x)%d>0)
        steps2+=1;
        cout<<min(steps1,steps2)<<endl;
    }
    else if(x>y)
    {
        steps1=(x-y)/d;
        if((x-y)%d>0)
            steps1+=1;
        steps2=((n-x)/d)+((n-y)/d);
        if((n-x)%d>0)
            steps2+=1;
        if((n-y)%d>0)
        steps2+=1;
        cout<<min(steps1,steps2)<<endl;
    }
    else
        cout<<0<<endl;
}
    return 0;

}


