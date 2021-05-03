#include<bits/stdc++.h>
using namespace std;
int main()
{


  int t,digit=0,c_letter=0,s_letter=0;
  cin>>t;
  string s;
  char ch;
  for(int i=1;i<=t;i++)
  {
      cin>>s;
      digit=0,c_letter=0,s_letter=0;
      for(int i=0;i<s.length();)
      {
         if(isdigit(s[i]) )
         {
           digit++;
           i++;
         }

         else if(islower(s[i]) )
         {
             s_letter++;
             i++;
         }

         else if(isupper(s[i]) )
         {
             c_letter++;
             i++;
         }

            else
                i++;
      }
//      if(c_letter==1 && s_letter==1 && digit==1)
//        cout<<s<<endl;
      if(c_letter==0 && digit==0)
      {
          s[0]='I';
          s[1]='7';
          cout<<s<<endl;
      }
      else if(c_letter==0 && s_letter==0)
      {
          s[0]='I';
          s[1]='i';
          cout<<s<<endl;
      }
      else if(s_letter==0 && digit==0)
      {
          s[0]='i';
          s[1]='1';
          cout<<s<<endl;
      }
      else if(s_letter==0)
      {
          if(digit>=2)
          {
              for(int i=0;i<s.length();i++)
              {
                  if(isdigit(s[i]))
                  {
                      s[i]='i';
                      break;
                  }
              }
          }
          else
          {
               for(int i=0;i<s.length();i++)
              {
                  if(isupper(s[i]))
                  {
                      s[i]='i';
                      break;
                  }
              }
          }
          cout<<s<<endl;
      }


       else if(c_letter==0)
      {
          if(digit>=2)
          {
              for(int i=0;i<s.length();i++)
              {
                  if(isdigit(s[i]))
                  {
                      s[i]='I';
                      break;
                  }
              }
          }
          else
          {
               for(int i=0;i<s.length();i++)
              {
                  if(islower(s[i]))
                  {
                      s[i]='I';
                      break;
                  }
              }
          }

          cout<<s<<endl;
      }

             else if(digit==0)
      {
          if(c_letter>=2)
          {
              for(int i=0;i<s.length();i++)
              {
                  if(isupper(s[i]))
                  {
                      s[i]='7';
                      break;
                  }
              }
          }
          else
          {
               for(int i=0;i<s.length();i++)
              {
                  if(islower(s[i]))
                  {
                      s[i]='7';
                      break;
                  }
              }
          }


          cout<<s<<endl;
      }
      else
        cout<<s<<endl;

  }


    return 0;
}



