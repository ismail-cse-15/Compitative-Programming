#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long int n,m,low,up,x,con;
    vector<int>main,cop;

    cin>>n>>m;
    main.resize(n);
    for(int i=0;i<main.size();i++)
        cin>>main[i];
        cop=main;
        for(int i=0;i<m;i++)
        {
           cin>>low>>up>>x;
           con=0;
           for(int i=low-1;i<up;i++)
           {
               if(main[x-1]>main[i])
                con++;
           }
          con+=low;
          if(con==x)
            cout<<"Yes"<<endl;
          else
            cout<<"No"<<endl;
          main=cop;

        }

    return 0;
}
