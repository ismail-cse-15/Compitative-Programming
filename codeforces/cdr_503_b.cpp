#include<bits/stdc++.h>
using namespace std;
int student[1010];
int main()
{
    int n,p[1010];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }



    for(int i=1;i<=n;i++)
    {
       memset(student,0,sizeof(p));
       student[i]=1;
       int x=p[i];
       while(student[p[x]]<=1)
       {
          student[x]++;
          if(student[x]==2)
          {
              cout<<x<<endl;
              break;
          }
          else

          x=p[x];

       }

    }

    return 0;
}


