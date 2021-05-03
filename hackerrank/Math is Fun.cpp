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
    for(int i=1;i<=t;i++)
    {
        char s[55];
        int sum=0,num;
        cin>>s;
    for(int j=0;s[j]!='\0';j++)
    {
        if(isdigit(s[j])){

          sum+=(s[j]-48);
        }
    }
    num=sum%3;
    (num<1)?cout<<"Case "<<i<<": "<<3<<endl:cout<<"Case "<<i<<": "<<(3-num)<<endl;


    }
    return 0;
}
