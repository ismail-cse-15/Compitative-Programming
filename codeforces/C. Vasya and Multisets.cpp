#include<bits/stdc++.h>
using namespace std;
int value_n[120];
int main()
{

int n,value[120],copyv[120],x=0,maximum=0,tamp;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>value[i];
    //copyv[i]=value[i];
    if(value[i]>maximum)
        maximum=value[i];
    value_n[value[i]]++;
}

for(int i=1;i<=maximum;i++)
{
    if(value_n[i]==1)
        x++;
}
tamp=0;
if(x%2==1)
    cout<<"NO"<<endl;
else
{
    cout<<"YES"<<endl;
    if(x==0)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<"A";
        }
        cout<<endl;
    }
    else {

        for(int i=1;i<=n;i++)
        {
            if(value_n[value[i]]==1 && tamp<(x/2))
            {
                cout<<"A";
                tamp++;
            }
            else if(value_n[value[i]]==1 && tamp>=(x/2))
            {
                cout<<"B";
                tamp++;
            }
            else
                cout<<"A";
        }
        cout<<endl;
    }
}
    return 0;
}





