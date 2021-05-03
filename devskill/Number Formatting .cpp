#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {


    string s,p;
    cin>>s;
    if(s[0]=='8')
    {
        if(s[4]=='1')
            cout<<s<<" "<<"Citycell"<<endl;
        else if(s[4]=='5')
            cout<<s<<" "<<"Teletalk"<<endl;
          else if(s[4]=='6')
            cout<<s<<" "<<"Airtel"<<endl;
              else if(s[4]=='7')
            cout<<s<<" "<<"Grameenphone"<<endl;
              else if(s[4]=='8')
            cout<<s<<" "<<"Robi"<<endl;
              else if(s[4]=='9')
            cout<<s<<" "<<"Banglalink"<<endl;
    }
    else
    {
        p="88"+s;
         if(p[4]=='1')
            cout<<p<<" "<<"Citycell"<<endl;
        else if(p[4]=='5')
            cout<<p<<" "<<"Teletalk"<<endl;
          else if(p[4]=='6')
            cout<<p<<" "<<"Airtel"<<endl;
              else if(p[4]=='7')
            cout<<p<<" "<<"Grameenphone"<<endl;
              else if(p[4]=='8')
            cout<<p<<" "<<"Robi"<<endl;
              else if(p[4]=='9')
            cout<<p<<" "<<"Banglalink"<<endl;
    }
    }
    return 0;
}
