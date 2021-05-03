#include<bits/stdc++.h>
using namespace std;

int main()
{

long long int n,reminder,four=0,seven=0,n1;
cin>>n;
n1=n;
for(int i=0;;i++)
{
    reminder=n%10;

    if(reminder==4)
    {
       four++;


        n=n/10;
    if(n==0)
    {
       if(four==seven)
       {
         cout<<n1<<endl;
         break;
       }

            else
            {
               n1++;
           n=n1;
            four=0;
        seven=0;
            }

    }
    }

    else if(reminder==7)
    {

        seven++;
         n=n/10;
    if(n==0)
    {
       if(four==seven)
       {
         cout<<n1<<endl;
         break;
       }

            else
            {
               n1++;
           n=n1;
            four=0;
        seven=0;
            }

    }
    }
    else
    {
      n1++;
      n=n1;
      four=0;
      seven=0;

    }

}


    return 0;
}




