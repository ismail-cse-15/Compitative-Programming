#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int day;
    cin>>day;
    if((day==29)||(day==30))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
