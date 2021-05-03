#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long int n,value_a[100010],flag=0,maximum=-1,current_value=0;
 cin>>n;
 for(int i=0;i<n;i++)
 {
   cin>>value_a[i];
}

if(value_a[0]==0)
{
    maximum=0;
  for(int i=1;i<n;i++)
{


     if(value_a[i]<=(maximum+1) && value_a[i]>=0 )
    {
        flag=0;
        if(value_a[i]>maximum)
            maximum=value_a[i];
    }

    else
    {
        flag=1;
        current_value=i+1;
        break;
    }
}
}
else
{
    flag=1;
    current_value=1;
}
 if(flag==1)
    cout<<current_value<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}


