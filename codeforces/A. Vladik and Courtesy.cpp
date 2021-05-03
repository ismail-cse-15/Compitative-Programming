#include<bits\stdc++.h>
using namespace std;
int main()
{
    long double  a,b,n1,c,n21,n22,n2,e;
    cin>>a>>b;
    n1=floor(sqrt(a));
    c=sqrt((1+4*b));
    n21=(-1+c)/2;
    n22=(-1-c)/2;
    n2=floor(n21);
    if(n1==n2)
        cout<<"Vladik"<<endl;
    else if(n1>n2)
    {
      cout<<"Valera"<<endl;
    }
    else
        cout<<"Vladik"<<endl;



    return 0;
}
