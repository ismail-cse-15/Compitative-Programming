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
    int p;
    vector<int>score;
    ind(p);
    for(int i=1;i<=p;i++)
    {
        int B,S,G,R,T=0;
        ind(B);
        ind(S);
        ind(G);
        ind(R);

        T=(B*1)+(S*3)+(G*10)-(R*5);
        score.push_back(T);
        if(T>0)
        printf("Player %d: %d\n",i,T);
        else
           printf("Player %d: %d\n",i,0);


    }
sort(score.begin(),score.end());
cout<<"High Score = "<<score[p-1]<<endl;
    return 0;
}
