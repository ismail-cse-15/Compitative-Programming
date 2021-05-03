#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p1,p2;
    cin>>n;
    if(n>=(-9))
        cout<<n<<endl;
    else
    {
        string p;
        stringstream s;

        int l;
        s<<n;
        s>>p;
        l=p.length();
        if(l==3){
         if(p[1]=='0')
         {

                cout<<0<<endl;

         }
         else if(p[2]=='0')
            cout<<0<<endl;
         else
         {
             cout<<p[0];
             if((p[1]-48)>=(p[2]-48))
                cout<<p[2]<<endl;
             else
                cout<<p[1]<<endl;
         }
        }
        else
        {


        if((p[l-2]-48)<=(p[l-1]-48))
        {
            for(int i=0;i<l-1;i++)
                cout<<p[i];
            cout<<endl;
        }
        else
        {
            p[l-2]='x';
            for(int i=0;i<l;i++)
            {
                if(p[i]!='x')
                    cout<<p[i];
            }
            cout<<endl;
        }
        }

    }

    return 0;
}
