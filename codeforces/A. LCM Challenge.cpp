#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")

int main()
{
  long long int n,c=0;
  vector<long long int>fibo;
  vector<long long int>::iterator it;
  fibo.push_back(0);
  fibo.push_back(1);
  for(int i=2;;i++)
  {
      long long int x;
      x=fibo[i-2]+fibo[i-1];
      fibo.push_back(x);

   if(x>=1000000000)
        break;
        }
        cin>>n;
     if(n==0)
            cout<<0<<" "<<0<<" "<<0<<" "<<endl;
     else if(n==1)
        cout<<1<<" "<<0<<" "<<0<<endl;
     else if(n==2)
        cout<<1<<" "<<1<<" "<<0<<endl;
     else
     {
         it=find(fibo.begin(),fibo.end(),n);
         if(it==fibo.end())
            cout<<"I'm too stupid to solve this problem"<<endl;
         else
            cout<<*(it-1)<<" "<<*(it-3)<<" " <<*(it-4)<<endl;
     }
     return 0;

}
