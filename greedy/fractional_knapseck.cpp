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
vector< pair<int,int> >object;
bool compare(pair<int,int> a,pair<int,int> b)
{
    int r1,r2;
    r1=a.first*b.second;
    r2=b.first*a.second;
    return r1>r2;
}
int main()
{
    int n,capacity;
    double knapsack=0;
    int  z;
    ind(n);
    ind(capacity);
    for(int i=0;i<n;i++)
    {
        int x,y;
        ind(x);
        ind(y);
        object.push_back(make_pair(x,y));
        }
        sort(object.begin(),object.end(),compare);
        cout<<"----------------------sorted data-----------------"<<endl;
        for(vector< pair<int,int> > ::iterator it=object.begin();it!=object.end();it++){
            cout<<it->first<<" "<<it->second<<endl;
            }
            for(int i=0;i<n;i++)
            {
                if(capacity<=0)
                    break;
                z=min(capacity,object[i].second);
                capacity-=z;

                knapsack+=((double)z*(double)object[i].first)/(double)object[i].second;
            }
            cout<<"Maximum profit is = "<<knapsack<<endl;

}
