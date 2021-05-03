#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")
int main()
{
    int t;
    sci(t);

    for(int j=1;j<=t;j++)
    {
        string s;

        long long int n,p,l=0,r;

        cin>>s>>p;

        for(int i=0;s[i]!='\0';i++)
        {
             if(p==l)
                break;
            if(s[i]!='9')
            {
                s[i]='9';
                l++;
            }

        }

        cout<<"Case "<<(j)<<": "<<s<<endl;
    }
    return 0;
}
