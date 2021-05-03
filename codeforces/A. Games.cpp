#include<bits/stdc++.h>
using namespace std;
int flag_array[5010];
int main()
{
   int n,h[35],a[35],change_no=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>h[i]>>a[i];
   }

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(i!=j && h[i]==a[j])
         change_no++;

    }
}
   cout<<change_no<<endl;

    return 0;
}





