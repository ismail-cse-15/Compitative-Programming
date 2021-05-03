#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,a[110],b[110];
    set<int>my_set;
    cin>>n>>p;


    for(int i=1;i<=p;i++){
        cin>>a[i];
        my_set.insert(a[i]);

}
  cin>>q;
  for(int i=1;i<=q;i++){
        cin>>b[i];
         my_set.insert(b[i]);

}
int set_size=my_set.size();
if(set_size==n)
    cout<<"I become the guy."<<endl;
else
     cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
