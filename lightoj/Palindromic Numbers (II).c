#include<stdio.h>
#include<string.h>
int main()
{
        int n,i;
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       int x,y=0,tem;
       scanf("%d",&x);
       tem=x;
       while(tem!=0)
       {
           y=(y*10)+(tem%10);
           tem/=10;
       }
       //printf("x= %d y=%d\n",x,y);
       if(y==x)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);

   }
    return 0;
}

