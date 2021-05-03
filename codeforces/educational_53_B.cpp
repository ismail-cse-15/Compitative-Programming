#include<bits/stdc++.h>
using namespace std;
int index[200020];
int main()
{


int n,a[200020],b[200020],current_index=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>a[i];
    index[a[i]]=i;
}

for(int i=1;i<=n;i++)
{
    cin>>b[i];
}
current_index=index[b[1]];
cout<<current_index;
for(int i=2;i<=n;i++)
{
  if(index[b[i]]>current_index)
  {

        cout<<" "<<(index[b[i]]-current_index);
        current_index=index[b[i]];
  }
  else
    cout<<" "<<0;
}
cout<<endl;
    return 0;
}







