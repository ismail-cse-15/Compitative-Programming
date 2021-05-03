#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    if(n>3)
    {

        if(n%2==0)
        {
            a=n/2;
            cout<<a<<endl;
            for(int i=1;i<=a;i++)
            {
                if(i==a)
                    cout<<2<<endl;
                else

                    cout<<2<<" ";
            }
        }
        else
        {
            b=(n-3)/2;
            cout<<(b+1)<<endl;
            for(int i=1;i<=b;i++)
                cout<<2<<" ";
            cout<<3<<endl;
        }
    }
    else
        cout<<1<<endl<<n<<endl;

}
