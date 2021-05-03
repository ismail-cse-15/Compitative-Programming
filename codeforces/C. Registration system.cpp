#include<bits/stdc++.h>
using namespace std;
 map < string,int > my_map;
int main()
{


   int n;
   string s;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>s;
       my_map[s]++;
       if(my_map[s]==1)
        cout<<"OK"<<endl;
       else
        cout<<s<<my_map[s]-1<<endl;

   }

    return 0;
}


