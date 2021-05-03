#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a,b,position_number;
    cin>>n>>k;
    a=(n+1)/2;
    b=n-a;
    if(k<=a)
    {
      position_number=(k*k)-((k-1)*(k-1));
    }
    else
    {
      position_number=(2*(k-a));
    }
    cout<<position_number<<endl;
    return 0;
}
