#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#define lf long double
#define ll long long int
using namespace std;
int main()
{
    int t;

    cin>>t;
    cin.ignore();//if we do not use ignore function it doesnot work properly.we should to know proper knowledge
    for(int i=1;i<=(t);i++){

    string s;
    //cin.ignore();
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    }
    return 0;
}
