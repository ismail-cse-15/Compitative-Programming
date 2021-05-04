#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<cstring>
using namespace std;
int arr[110];
int main()
{
    int n,x,edge;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    edge=sum/2;
    if(edge==(n-1))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
