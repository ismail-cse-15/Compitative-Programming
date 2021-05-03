#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")
int main()
{
    int n,cap,p,digit,flag=0;
    vector<int>lucky;
    vector<int>::iterator it;

    sci(n);
    for(int i=4;i<=1000;i++)
    {
         string s;
    stringstream ss;
        p=1;
        cap=i;
        ss<<cap;
        ss>>s;

        for(int j=0;s[j]!='\0';j++)
        {
            if((s[j]!='4')&&(s[j]!='7'))
            {
                p=0;
                break;
            }
        }

          if(p==1){
            lucky.push_back(i);


        }
    }
    for( int i=0;i<14;i++)
    {
        if(n%lucky[i]==0){
                flag=1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;

    return 0;
}
