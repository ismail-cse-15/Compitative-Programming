
#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{
 int a,b,c,d,misha,vashia;
 cin>>a>>b>>c>>d;
 misha=max((3*a/10),(a-((a/250)*c )));
 vashia=max((3*b/10),(b-((b/250)*d)));


 if(misha>vashia)
    cout<<"Misha"<<endl;
 else if(vashia>misha)
    cout<<"Vasya"<<endl;
 else
    cout<<"Tie"<<endl;

    return 0;

}

