#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{
  long long int n,k,red,green,blue;
cin>>n>>k;
red=(2*n);
green=(5*n);
blue=(8*n);
  long long int total=0;
total+=red/k+blue/k+green/k;
if(red%k>0)
    total+=1;
if(green%k>0)
    total+=1;
if(blue%k>0)
    total+=1;
cout<<total<<endl;

    return 0;

}


