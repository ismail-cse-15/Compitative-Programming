#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test_case;
   scanf("%d",&test_case);
   for(int i=1;i<=test_case;i++)
   {
       int n,total=0;
       //getline();
       scanf("%d",&n);
       while(n--)
       {
           int x;
           scanf("%d",&x);
           if(x>0)
           total+=x;
       }
       printf("Case %d: %d\n",i,total);
   }
   return 0;
}
