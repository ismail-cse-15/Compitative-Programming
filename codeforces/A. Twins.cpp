#include<bits/stdc++.h>
using namespace std;
int flag_array[5010];
int main()
{

    int n,coin[110],your_coin=0,remaining_coin_value=0,your_coin_value=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
        remaining_coin_value+=coin[i];
    }
    sort(coin,coin+n);
    for(int j=n-1;j>=0;j--)
    {
        if(your_coin_value>remaining_coin_value)
            break;
        else
        {
            your_coin++;
            your_coin_value+=coin[j];
            remaining_coin_value-=coin[j];

        }
    }
    cout<<your_coin<<endl;

    return 0;
}




