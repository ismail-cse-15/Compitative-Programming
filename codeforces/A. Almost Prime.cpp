#include<bits/stdc++.h>
#include "my_header.h"
using namespace std;
int main()
{
//    int n,c=0,t;
//    bool mark[3000];
//    vector<int>prime;
//    memset(mark,true,sizeof(mark));
//    for(int i=2;i<=sqrt(3000)+1;i++)
//    {
//        if(mark[i]==true)
//        {
//            for(int j=i*2;j<=3000;j+=i)
//            {
//                mark[j]=false;
//            }
//        }
//    }
//
//    for(int i=2;i<=3000;i++){
//        if(mark[i]==true){
//        prime.push_back(i);
//
//        }
//    }
//    mark[1]=false;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        t=0;
//       for(int j=0;prime[j]<=(i/2);j++)
//       {
//           if((i%prime[j])==0)
//            t+=1;
//       }
//       if(t==2)
//        c+=1;
//    }
//
//  cout<<c<<endl;
long long int a,b,c;
cin>>a>>b;
c=add(a,b);
cout<<c<<endl;

    return 0;
}
