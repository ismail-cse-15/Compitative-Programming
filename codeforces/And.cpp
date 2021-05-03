#include <sstream>
#include <vector>
#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
int number[100100];
using namespace std;



int main() {
  int n,x,flag=0,store[100100],operation=0,temp;
  cin>>n>>x;
  for(int i=1;i<=n;i++)
  {
      cin>>store[i];
      number[store[i]]++;
      if(number[store[i]]==2)
        flag=1;
  }
  if(flag==1)
    cout<<operation<<endl;
  else
  {
      for(int i=1;i<=n;i++)
      {
          temp=store[i] & x;
        if(number[temp]==2)
        {
            number[temp]++;
            operation++;
            flag=1;
            break;
        }
        else
           number[temp]++;
      }
      if(flag==1)
        cout<<operation<<endl;
      else
        cout<<"-1"<<endl;
  }


    return 0;
}


