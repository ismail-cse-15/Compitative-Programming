#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{
int a[100010],p[100010],current_minimum,n,min_price=0;

cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>a[i]>>p[i];
}
current_minimum=p[1];
for(int i=1;i<=n;i++){

    if(p[i]<current_minimum)
    {
        current_minimum=p[i];

    }
    min_price=min_price+(a[i]*current_minimum);
}
cout<<min_price<<endl;

    return 0;

}


