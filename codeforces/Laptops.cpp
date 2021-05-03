#include<bits/stdc++.h>
using namespace std;
bool prime[100010];
int c[510],row[510],b[510][510];
int main()

{
    int n,m,a[510][510];

    for(int i=2; i<=sqrt(100010); i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*2; j<=100010; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    prime[1]=1;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
            int x;
            x=a[i][j];
            if(prime[x]==true)
            {
                for(int k=x+1;; k++)
                {
                    if(prime[k]==false)
                    {
                        b[i][j]=(k-x);
                        break;
                    }
                }
            }
        }
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
            c[i]+=b[j][i];

    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            row[i]+=b[i][j];

    }
    sort(c+1,c+(m+1));
    sort(row+1,row+(n+1));
    if(c[1]<row[1])
        cout<<c[1]<<endl;
    else if(c[1]>row[1])
        cout<<row[1]<<endl;
    else
        cout<<c[1]<<endl;

    return 0;
}
