#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
      int n;
      long long int last_number;
      cin>>n;
      last_number=(3*n);
      cout<<"Case #"<<i<<": ";
      if(n%2==1)
        cout<<(last_number-2)<<" "<<(last_number-1)<<" "<<(last_number-0)<<endl;
      else
       cout<<(last_number-0)<<" "<<(last_number-1)<<" "<<(last_number-2)<<endl;

    }
    return 0;
}
