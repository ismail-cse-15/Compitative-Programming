#include<bits/stdc++.h>
using namespace std;
int flag_array[5010];
int main()
{

    int t,exit_passenger,entry_passenger,current_bus_passenger=0,capacity=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>exit_passenger>>entry_passenger;
        current_bus_passenger=current_bus_passenger-exit_passenger+entry_passenger;
        if(current_bus_passenger>capacity)
            capacity=current_bus_passenger;
    }

cout<<capacity<<endl;

    return 0;
}



