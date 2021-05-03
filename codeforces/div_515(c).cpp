#include<bits\stdc++.h>
using namespace std;
long long int x[200010];
int main()
{
  int n;
  long long int id,l=0,r=0;
  char ch;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
     cin>>ch>>id;
     if(i==1 && (ch=='L' || ch=='R'))
     {
         x[id]=1;
         l++;
         r++;
     }
     else{
        if(ch=='?')
        {
           long long int right,left;
           left=abs(x[id]-l);
           right=abs(x[id]-r);
           cout<<min(left,right)<<endl;
        }
        else if(ch=='L')
        {
            l--;
            x[id]=l;

        }
        else
        {
            r++;
            x[id]=r;
        }


     }
  }



    return 0;
}


