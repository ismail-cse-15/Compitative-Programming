#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int test_case;
//    scanf("%d",&test_case);

    string str;
    getline(cin,str);

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='.')
        str[i]=' ';

    }

    stringstream ss(str);

    string tak;
    string arr[4];
    int i=0;
    while(ss>>tak)
    {
        arr[i++]=tak;
    }

    for(int i=0;i<4;i++)
        cout<<arr[i]<<endl;

}
