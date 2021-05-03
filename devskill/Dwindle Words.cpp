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
    int T;
    ind(T);
    while(T--)
    {
    int n;
    ind(n);
    string s;
    vector<int>length;
    int x=110;
    //length.resize(n+10);
    length.push_back(10);
    for(int j=1;j<=n;j++)
    {
         cin>>s;
        set<char>my_set;
        for(int i=0;i<s.length();i++)
        {
           my_set.insert(s[i]);
        }


        if(my_set.size()<x)
        {
            length.clear();
            x=my_set.size();
            length.push_back(j);
            my_set.clear();

        }
         else if(my_set.size()==x)
        {
            //length.clear();
            x=my_set.size();
            length.push_back(j);
            my_set.clear();

        }
        else
        my_set.clear();

    }
    cout<<length[0];
    for(int i=1;i<length.size();i++)
        cout<<" "<<length[i];
        cout<<endl;
    length.clear();


}

}
