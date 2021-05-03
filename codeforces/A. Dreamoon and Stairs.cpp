#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,maximum,minimum,required,flag=0;
    cin>>n>>m;
    maximum=n/1;
    minimum=(n/2)+(n%2);
    for(int i=minimum;i<=maximum;i++)
    {
        if(i%m==0)
        {
          flag=1;
          required=i;
          break;
        }
    }
    if(flag==1)
        cout<<required<<endl;
        else
            cout<<"-1"<<endl;


    return 0;

}



