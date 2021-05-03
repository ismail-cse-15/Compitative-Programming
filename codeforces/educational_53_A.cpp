#include<bits/stdc++.h>
using namespace std;
int value_n[120];
int main()
{

int n,x=0,start,endx;
string s;
cin>>n;
cin>>s;
if(n==1)
cout<<"NO"<<endl;
else
{

    for(int i=0;i<s.length()-1;i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]!=s[j])
            {
                x=1;
                start=i;
                endx=j;
                break;
            }
        }
        if(x==1)
            break;
    }
    if(x==1)
{
    cout<<"YES"<<endl;
    cout<<s[start]<<s[endx]<<endl;
}
else
    cout<<"NO"<<endl;
}



    return 0;
}






