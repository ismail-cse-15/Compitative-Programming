#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin>>n;
    if(n>=120)
        cout<<"Good Boy Sifat"<<endl;
    else
        cout<<"Naughty Boy Sifat"<<endl;
    }
    return 0;
}
