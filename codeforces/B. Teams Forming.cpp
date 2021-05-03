#include<bits/stdc++.h>

using namespace std;
int main()
{
int n,x,problem=0;
vector<int>my_vector;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>x;
    my_vector.push_back(x);
}
sort(my_vector.begin(),my_vector.end());
for(int i=0;i<n;)
{
    if(my_vector[i]==my_vector[i+1])
    {
        i+=2;
    }
    else
    {
        problem+=(my_vector[i+1]-my_vector[i]);
        i+=2;
    }
}

cout<<problem<<endl;
    return 0;
}

