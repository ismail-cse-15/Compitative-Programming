#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int kount;
int main()
{
    int n;

    scanf("%d",&n);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
            kount++;

    }
    printf("%d\n",kount);
    return 0;
}
