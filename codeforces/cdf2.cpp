#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
vector<long long int>point;
int x=0;
int main()
{
long long int n,a[200020],problem=1;
cin>>n;
cin>>a[1];
for(int i=2;i<=n;i++)
{
    cin>>a[i];
    if(a[i]<=(a[i-1]*2))
        problem++;
    else
    {

        point.push_back(problem);
        x++;
        problem=1;
    }

}
sort(point.begin(),point.end());
cout<<point[x-1]<<endl;




    return 0;

}




