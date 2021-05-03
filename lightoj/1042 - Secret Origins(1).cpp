#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<bits/stdc++.h>
int main()
{
     int test_case;
    scanf("%d",&test_case);
      for(int i=1;i<=test_case;i++)
    {
        int n,one,next_one,next_n;
        scanf("%d",&n);
        one=__builtin_popcount(n);

        for(int j=n+1;;j++)
        {
         if(__builtin_popcount(j)==one)
         {
             next_n=j;
             break;
         }
        }
        printf("Case %d: %d\n",i,next_n);


    }
    return 0;
}
