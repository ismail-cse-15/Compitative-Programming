#include<bits/stdc++.h>
using namespace std;
vector<int>devisor;
bool binary(int x)

{
    int flag=0,l=1;
    int zero=0,one=0,priv[]={-1,-1,-1,-1};

    while(x!=0)
    {

     if(x%2==0)
     {

         if(priv[flag]!=0)
         {
            priv[flag]=0;
         flag++;
         }


        zero++;
         x/=2;
     }

     else
     {
        if(priv[flag]!=1)
         {
            priv[flag]=1;
         flag++;
         }
      one++;
      x/=2;
     }
      if(flag==3)
         {
            l=0;
            break;
         }

    }
    if(l==0)
    return false;
    else
    {
        if(one-zero==1)
            return true;
        else
            return false;


    }


}
int main()
{
    int n,x;
    scanf("%d",&n);
    x=n;
    devisor.push_back(1);
    devisor.push_back(n);
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
                if((i*i)!=n){
                  devisor.push_back(i);
               x=n/i;
              devisor.push_back(x);
                }
                else
                    devisor.push_back(i);
                }
                }
                sort(devisor.begin(),devisor.end(),greater<int>());
//                for(int i=0;i<devisor.size();i++)
//                    cout<<devisor[i]<<" ";
for(int i=0;i<devisor.size();i++)
{
    int num=devisor[i];
    if(binary(num)==true)
    {
        cout<<num<<endl;
    }
}



}
