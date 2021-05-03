#include<bits\stdc++.h>
using namespace std;
long long int x[200010];
int main()
{
  long long int n,m,k,total=0,total_p=0,box_position=1,a,tamp_k;
  cin>>n>>m>>k;
  tamp_k=k;
  for(int i=1;i<=n;i++)
  {
      cin>>x[i];
  }
 // sort(x,x+n+1);
 for(int j=1;j<=n;j++)
 {

     if(total>(n-j))
    break;
    else
    {
        total_p=0;
     box_position=1;
     k=tamp_k;
     for(int i=j;i<=n && box_position<=m ;i++)
{
     if(k>=x[i])
    {
        total++;
        k-=x[i];
    }
    else
    {

        box_position++;
        k=tamp_k;
        if(k>=x[i] && box_position<=m)
    {
        total++;
        k-=x[i];
    }

    }
    cout<<"total: "<< total <<" boxposition: "<<box_position<<endl;
}
    }

if(total>total_p)
{
    total_p=total;
    total=0;
}

 }

cout<<total_p<<endl;




    return 0;
}



