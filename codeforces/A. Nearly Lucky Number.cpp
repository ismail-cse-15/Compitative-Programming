#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,result=0,reminder,tamp;
    cin>>n;
    for(int i=1;n!=0;i++)
    {
        reminder=n%10;
        n/=10;
        if(reminder==4 || reminder==7)
            result++;
    }
//cout<<result<<endl;
    int flag=0;
    tamp=result;
    for(int i=1;result!=0;i++)
    {

        reminder=result%10;
        result/=10;

        if(reminder!=4 && reminder!=7)
        {

            flag=1;
            break;
        }
        if(result==0)
            break;

    }
    if(flag==0 && tamp!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

