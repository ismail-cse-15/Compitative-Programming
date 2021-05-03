#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x1,x2,y1,y2,a,b,c;
        cin>>x1>>y1>>x2>>y2;
        a=abs(x1-x2);
        b=abs(y1-y2);
        c=a+b;
        cout<<"Case "<<i<<": "<<c<<endl;
    }

}
