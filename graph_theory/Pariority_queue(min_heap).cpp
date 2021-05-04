#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int > >my_queue;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        my_queue.push(x);
    }
    cout<<"size is = "<<my_queue.size()<<endl;
    cout<<"priorituy queue contains:"<<endl;
    while(!my_queue.empty())
    {
        cout<<my_queue.top()<<" ";
        my_queue.pop();
    }
    cout<<endl;
}

