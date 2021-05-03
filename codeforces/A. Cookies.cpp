#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,bag[110],no_of_steal=0,total=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>bag[i];
        total+=bag[i];
    }
    for(int i=1;i<=n;i++)
    {
        if((total-bag[i])%2==0)
            no_of_steal++;
    }

cout<<no_of_steal<<endl;

}

