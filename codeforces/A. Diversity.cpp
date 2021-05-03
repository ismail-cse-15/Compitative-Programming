#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
map< char , bool> my_map;
int main()
{

    string s;
    int total=0,k;
    cin>>s>>k;
    //total=k;
    if(k>s.length())
        cout<<"impossible"<<endl;
    else
    {
        for(int i=0;i<s.length();i++)
        {


            if(my_map[s[i]]==false  )
            {
                my_map[s[i]]=true;
                total++;

            }


        }
        if(total>=k)
            cout<<0<<endl;
        else
            cout<<(k-total)<<endl;



    }

    return 0;

}

