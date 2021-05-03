#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

string a,b,c,d;
vector <string>my_string;
//
//cout<<"What's your full name"<<endl;
//getline(cin,a);
//cout<<a<<endl;
//
//cout<<"How old are you:"<<endl;
//cin>>c;
//cout<<c<<endl;
//cin.ignore();
//cout<<"University name"<<endl;
//getline(cin,b);
//cout<<b<<endl;
//cout<<"what's your Father name"<<endl;
//getline(cin,d);
//cout<<d<<endl;

int ab[10]={10,20,30,40,41,56,32},n;

string s;
cin>>n;
for(int i=0;i<n;i++)
{
   cin>>s;
   my_string.push_back(s);
}
sort(my_string.begin(),my_string.end());

for(int i=0;i<n;i++)
{
   cout<<my_string[i]<<" ";
}

    return 0;
}

