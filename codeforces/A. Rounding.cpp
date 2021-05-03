#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long int n,last_digit;
    cin>>n;
    last_digit=n%10;
    if(last_digit==0)
        cout<<n<<endl;
    else
    {
        if(last_digit<=5)
            cout<<(n-last_digit)<<endl;
        else
            cout<<(n+(10-last_digit))<<endl;
    }


    return 0;
}


