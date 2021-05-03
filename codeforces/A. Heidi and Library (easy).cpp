#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n,k,c=0,sum=0,p;
    vector<int>a,b;
    vector<int>::iterator x,y;
    cin>>n>>k;
    b.resize(n);
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        p=0;
        sum+=1;
        x=find(b.begin(),b.end(),a[i]);
        if((sum<=k)&&(x!=b.end())){
            c+=0;

        }
        if((sum<=k)&&(x==b.end()))
        {
            b[i]=a[i];
            c+=1;

        }
        if((sum>k)&&(x!=b.end()))
        {
            sum-=1;
            for(int j=0,k=n-1;j<n,k>=0;j++,k--)
            {
                y=find(b.begin(),b.end(),a[j]);
                if((y!=x)&&(a[k]!=b[j])){
                    b[j]=0;
                    p==1;
                    break;
                }

            }
            if(p==0)
            {
                  for(int j=0;j<n;j++)
            {
                y=find(b.begin(),b.end(),a[j]);
                if((y!=x)){
                    b[j]=0;
                    p==1;
                    break;
                }

            }
            }

        }
            if((sum>k)&&(x==b.end()))
        {
            sum-=1;
            for(int j=0,k=n-1;j<n,k>=0;j++,k--)
            {
                y=find(b.begin(),b.end(),a[j]);
                if((y!=x)&&(a[k]!=b[j])){
                    b[j]=0;
                    p=1;
                    b[i]=a[i];
                    c+=1;
                    break;
                }

            }
            if(p==0)
            {
            for(int j=0;j<n;j++)
            {
                y=find(b.begin(),b.end(),a[j]);
                if((y!=x)){
                    b[j]=0;
                    p==1;
                    b[i]=a[i];
                    break;
                }

            }
            }

        }

    }
    cout<<c<<endl;
    return 0;
}
