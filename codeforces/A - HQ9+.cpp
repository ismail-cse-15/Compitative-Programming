#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{
 string line;
 bool flag=false;
 getline(cin,line);
 int line_size=line.size();
 //cout<<line_size<<endl;
 for(int i=0;i<line_size;i++)
 {
     if(line[i]=='H' || line[i]=='Q'  || line[i]=='9')
     {
         flag=true;
         break;
     }
 }
 if(flag==true)
    cout<<"YES"<<endl;
 else
    cout<<"NO"<<endl;

    return 0;

}

