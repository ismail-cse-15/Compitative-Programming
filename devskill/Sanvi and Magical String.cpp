#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ind(x) scanf("%d",&x);
#define inc(x) scanf("%c",&x);
#define outd(x) printf("%d",x);
#define outn(n) printf("\n");
#define outs() printf(" ");
#define outline(x) printf("x");
#define inll(x) scanf("%lld",&x);
int main()
{
    int T,n;
    ind(T);
    for(int i=1;i<=T;i++)
    {
        char arr[1010];
        vector<int>length;
        ind(n);
        cin>>arr;
        sort(arr,arr+n);
        char c=arr[0];
        int l=1;
        for(int j=1;j<n;j++)
            {
                if(c==arr[j])
              {
                  l++;
                  if(j==n-1)
                  {
                     length.push_back(l);
                      l=1;
                  }
              }

              else{
                    c=arr[j];
                  length.push_back(l);
                  l=1;
              }
            }
            sort(length.begin(),length.end());
            int x=length.size();
            cout<<(n-length[x-1])<<endl;
            length.clear();


    }
}
