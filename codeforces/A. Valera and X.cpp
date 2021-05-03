#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    char arr[310][310],arr1[310][310];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cin>>arr[i][j];
           arr1[i][j]=arr[i][j];
        }
    }
    char dio=arr[1][1],other=arr[1][2];
    int flag1=1,flag2=1,flag3=1;
    for(int i=n,j=1;i>=1,j<=n;i--,j++)
    {
       if(dio!=arr[i][j] || dio!=arr[j][j])
       {
           flag1=0;
           break;
       }

    }
     if(flag1==0)
        cout<<"NO"<<endl;
     else
     {
    for(int i=n,j=1;i>=1,j<=n;i--,j++)
    {
      arr1[i][j]='1';
      arr1[j][j]='1';

    }
      for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(!isdigit(arr1[i][j]) && other!=arr1[i][j])
           {
               flag2=0;
               break;
           }


        }

    }
    if(flag2==1 && other!=dio)

        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
     }




}
