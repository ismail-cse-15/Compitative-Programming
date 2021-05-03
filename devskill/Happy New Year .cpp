#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    string s[10];
    int year;
    for(int i=0;i<3;i++)
        cin>>s[i];
        cin>>year;
        if(s[0]=="Shuvo")
            cout<<"Shuva naya barsha "<<(year+650)<<endl;
        else
           cout<<"Shuvo nobo borsho "<<(year-650)<<endl;
    }
    return 0;
}
