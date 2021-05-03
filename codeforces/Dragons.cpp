#include<bits/stdc++.h>
using namespace std;
long long int s,n,x[1010],y[1010];

 struct dragons
    {
        long long int spend;
        long long int earn;
    }jump[1010];
   bool cmp(dragons a,dragons b)
    {
        if(a.spend!=b.spend) return a.spend<b.spend;
        return a.earn>b.earn;
    }
// bool cmp(long long int a,long long int b)
//    {
//        if(a!=b) return a<b;
//        return a<b;
//    }
int main()
{

 bool poss=true;
 cin>>s>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>x[i]>>y[i];
     jump[i].spend=x[i];
        jump[i].earn=y[i];
 }

 sort(jump , jump+n+1,cmp);

// for(int i=1;i<=n;i++)
// {
//     cout<<jump[i].spend<<" "<<jump[i].earn<<endl;
// }

for(int i=1;i<=n;i++)
{
    if(s>jump[i].spend)
        s+=jump[i].earn;
    else{
      poss=false ;
      break;
    }
}
if(poss==true)
    cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;



    return 0;
}





