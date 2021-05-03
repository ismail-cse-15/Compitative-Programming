#include<bits\stdc++.h>
using namespace std;
int main()
{
   int a,b,x,y;
   cin>>a>>b;
   x=min(a,b);
   if(a>b)
    y=a-x;
   else if(b>a)
    y=b-x;
   else
    y=0;
   y=y/2;
   cout<<x<<" "<<y<<endl;



    return 0;
}

