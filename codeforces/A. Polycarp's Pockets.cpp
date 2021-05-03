#include<bits\stdc++.h>
using namespace std;
int value[110];

int main()
{
    int n,maximum=0,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        value[x]++;
    }
for(int i=1;i<=100;i++)
{
    if(value[i]>maximum)
        maximum=value[i];
}
cout<<maximum<<endl;
    return 0;
}



