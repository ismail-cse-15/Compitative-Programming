#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int m;
int biniry_one(int x)
{
    int total=0;
    while(x!=0)
    {
        if(x%2==1)
            total++;
        x/=2;
        m++;
    }
    return total;
}
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++)
    {
        int n,one,next_one,next_n;
        scanf("%d",&n);
        one=biniry_one(n);
        for(int j=n+1;;j++)
        {
            next_one=biniry_one(j);
            if(next_one==one)
            {
                next_n=j;
                break;
            }

        }
        printf("Case %d: %d\n",i,next_n);


    }
    return 0;

}
