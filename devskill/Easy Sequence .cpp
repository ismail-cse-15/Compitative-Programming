#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        vector<int>seris(50,0);
        cin>>n;
        seris[0]=1;
        seris[1]=3;
        for(int i=2;i<n;i++)
            seris[i]+=(seris[i-1]+seris[i-2]);
        cout<<seris[n-1]<<endl;
    }
    return 0;
}
