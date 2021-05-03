#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
#define sp printf(" ")
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      char c[30];
      cin>>c;
      for(int i=0;c[i]!='\0';i++)
      {
          if(isalpha(c[i]))
          {
              if(islower(c[i]))
                c[i]=toupper(c[i]);
              else
                c[i]=tolower(c[i]);
          }


      }
      cout<<c<<endl;
  }
    return 0;
}
