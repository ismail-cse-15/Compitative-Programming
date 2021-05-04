#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    priority_queue<int>my_queue,p;
    int n;
    cin>>n;
    cout<<"size is = "<<my_queue.size()<<endl;
    for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    my_queue.push(x);
}

cout<<"size is = "<<my_queue.size()<<endl;

while(!my_queue.empty())
{
    cout<<p.top()<<" ";
    p.pop();
}
cout<<endl;

}
