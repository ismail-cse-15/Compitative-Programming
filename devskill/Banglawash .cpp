#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {


    int a,b,c,d,cou=0;
    for(int i=0;i<2;i++)
    {
        cin>>a>>b>>c>>d;
        if((a+b)>(c+d))
            cou+=1;
    }
   if(cou==2)
    cout<<"Banglawash"<<endl;
   else
    cout<<"Miss"<<endl;
    }
    return 0;
}
