#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    long long int ao,bc,area,side;
    cin>>ao>>bc;
    side=(2*ao);
    area=(side*side)-(bc*bc);
    cout<<"Case "<<i<<": "<<area<<endl;
    }
    return 0;
}
