#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{
 int row,comumn,ring;
 cin>>row>>comumn>>ring;
 int total=0;
 for(int i=1;i<=ring;i++)
 {
     total+=(comumn*2)+((row-2)*2);
     row=row-4;
     comumn=comumn-4;
 }

 cout<<total<<endl;

    return 0;

}



