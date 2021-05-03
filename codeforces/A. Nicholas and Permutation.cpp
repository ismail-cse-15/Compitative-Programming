#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,a[110];
 cin>>n;
 for(int i=1;i<=n;i++)
    cin>>a[i];
 int lowest_index,highest_index,distance,highest_distance;
 lowest_index=a[1];
 highest_index=a[n];
 distance=abs(a[1]-a[n]);
 highest_distance=n-1;

    return 0;
}


