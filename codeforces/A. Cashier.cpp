#include<bits\stdc++.h>
using namespace std;
long long int break_no=0,current_minute=0;
int main()
{
    long long int n,L,a,t,l,middle_time;
    cin>>n>>L>>a;
    for(int i=1;i<=n;i++)
    {
        cin>>t>>l;

           middle_time=t-current_minute;
           break_no+=middle_time/a;
           current_minute+=middle_time;
           current_minute+=l;
           //cout<<current_minute<<endl;

    }



if(current_minute<L)
{
   middle_time=L-current_minute;
           break_no+=middle_time/a;
           current_minute+=middle_time;
}
cout<<break_no<<endl;
}
