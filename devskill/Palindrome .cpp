#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int t,l;
    cin>>t;
    for(l=0;l<t;l++){
    string c;
    char p[110],s[110];
    int n,x=0;
    cin>>c;
    for(int i=0;c[i]!='\0';i++)
    {

        if((!isdigit(c[i]))&&(isupper(c[i])))
        {
            p[i]=tolower(c[i]);
        }
        else
            p[i]=c[i];

    }
   n=c.length();
    p[n]='\0';

   for( int j=n-1,k=0;j>=0;j--,k++)
   {
       s[k]=p[j];
   }
   s[n]='\0';
  for(int i=0;i<n;i++)
  {
      if(s[i]!=p[i]){
        x=1;
        break;
      }
  }
  if(x==0)
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
    }
    return 0;
}
