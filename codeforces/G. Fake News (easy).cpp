#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0;

    cin>>s;
    if(s!="heidi"){
    for(int i=0;s[i]!='\0';i++)
    {
        if((c==0)&&(s[i]=='h'))
        c++;
        else if((c==1)&&(s[i]=='e'))
          c++;
         else if((c==2)&&(s[i]=='i'))
          c++;
           else if((c==3)&&(s[i]=='d'))
          c++;
           else if((c==4)&&(s[i]=='i')){
          c++;
          break;
           }

    }
    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
