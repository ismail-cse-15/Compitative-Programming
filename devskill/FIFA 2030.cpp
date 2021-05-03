#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define in(x) scanf("%d",&x);
#define inc(x) scanf("%c",&x);
#define outd(x) printf("%d",x);
#define outn(n) printf("\n");
#define outs() printf(" ");
#define outline(x) printf("x");
int main()
{
    int T;

    cin>>T;
    for(int i=0;i<T;i++)
    {
        int x;
        string name[20],winner;
        int goal[20],store[20];
        cin>>x;
        for(int j=0;j<x;j++)
        {
          cin>>name[j]>>goal[j];
          store[j]=goal[j];
        }
    sort(goal,goal+x);
    int highest=goal[x-1];
    //cout<<highest<<endl;
    for(int k=0;k<x;k++)
    {
        if(highest==store[k])
        {
            winner=name[k];
            break;

        }


    }
    cout<<"Winner:"<<" \\"<<winner<<"/"<<endl;

    }

    return 0;
}
