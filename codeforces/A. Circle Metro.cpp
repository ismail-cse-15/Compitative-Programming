#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main(){
 long long int n,a,x,b,y;
 cin>>n>>a>>x>>b>>y;
 for(int i=0;;i++)
 {
  //cout<<"a = "<<a<<"  b= "<<b<<endl;
     if(a==b){
        movement=1;
        break;
     }
     else if(a==x){
        break;
     }
     else if(b==y){
        break;
     }
     else{

        if(a<n){
            a=a+1;
        }
        else
        {
            a=1;
        }

        if(b>1){
            b=b-1;
        }
        else{
            b=n;
        }
     }

 }

 if(movement==0){
    cout<<"NO"<<endl;

 }
 else
    cout<<"YES"<<endl;

 return 0;

}







