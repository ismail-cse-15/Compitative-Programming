#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=1;l<=t;l++)
    {


    int r,c,flag=0;
    string s[110];
    cin>>r>>c;
    for(int i=0;i<r;i++)
        cin>>s[i];
        cout<<"Case "<<l<<":"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          if(s[i][j]=='$')
          {
              flag=1;
              cout<<(i+1)<<","<<(j+1)<<endl;
          }
        }
    }
    if(flag==0)
        cout<<"No Gold Found"<<endl;
    }
    return 0;
}
