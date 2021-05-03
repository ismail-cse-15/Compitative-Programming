#include<bits/stdc++.h>
using namespace std;
//long long int bigmod(long long int b,long long int p,long long int m)
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {


      int n,my_array[210],d,aux[210],no_0f_rotate_element=0;
      cin>>n;
      for(int j=1;j<=n;j++)
      {
          cin>>my_array[j];
      }
      cin>>d;
      //if(d>n)
        no_0f_rotate_element=d%n;
      cout<<my_array[no_0f_rotate_element+1];
      for(int k=no_0f_rotate_element+2;k<=n;k++)
      {
          cout<<" "<<my_array[k];
      }
      for(int l=1;l<=no_0f_rotate_element;l++)
      {
          cout<<" "<<my_array[l];
      }
      cout<<endl;


  }

    return 0;
}

