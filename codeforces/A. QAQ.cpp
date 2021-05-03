#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='Q')
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]=='A')
                {
                    for(int k=j+1;k<s.size();k++)
                    {
                        if(s[k]=='Q')
                            n++;
                    }
                }
            }
        }
    }
    cout<<n<<endl;
    return 0;

}
