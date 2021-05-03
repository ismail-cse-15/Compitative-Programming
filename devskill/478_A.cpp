#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100];
int visited[100];

int main()
{
 int n;

string s;
 cin>>n;
  getline(cin,s);
 for(int i=0;i<n;i++)
 {

     getline(cin,s);
     //cout<<s<<endl;
      int x=s.length();
       if(x>=5)
     {
         if((s[0]=='m' && s[1]=='i' && s[2]=='a' && s[3]=='o' && s[4]=='.')&&
            (s[x-1]=='.' && s[x-2]=='a' && s[x-3]=='l' && s[x-4]=='a' && s[x-5]=='l'))
         {
             cout<<1<<endl;
             cout<<"OMG>.< I don't know!"<<endl;
         }
         else if(s[0]=='m' && s[1]=='i' && s[2]=='a' && s[3]=='o' && s[4]=='.')
         {
              cout<<2<<endl;
              cout<<"Rainbow's"<<endl;

         }

           else if (s[x-1]=='.' && s[x-2]=='a' && s[x-3]=='l' && s[x-4]=='a' && s[x-4]=='l')
           {
               cout<<3<<endl;
             cout<<"Freda's"<<endl;
           }

         else
         {

               cout<<4<<endl;
             cout<<"OMG>.< I don't know!"<<endl;
         }

     }
     else
     {
         cout<<5<<endl;
         cout<<"OMG>.< I don't know!"<<endl;
     }

 }


   return 0;
}

