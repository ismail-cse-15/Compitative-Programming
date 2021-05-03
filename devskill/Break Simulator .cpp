#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ca;
    cin>>ca;
    for(int i=0;i<ca;i++)
    {


    double v,t,dec;
    cin>>v>>t;
    dec=-(v/t);
    dec+=0.00;
    cout<<setprecision(2)<<fixed<<dec<<endl;
    }
    return 0;
}
