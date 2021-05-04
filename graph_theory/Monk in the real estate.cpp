#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int edge,kount=0;
        vector<int>city;
         vector<int>::iterator itx,ity;
         cin>>edge;

        for(int j=0;j<edge;j++)
        {
            int x,y;
            vector<int>::iterator itx,ity;
            cin>>x>>y;
            itx=find(city.begin(),city.end(),x);
              ity=find(city.begin(),city.end(),y);
            if((itx==city.end())&&(ity==city.end())){
                    if(x!=y){
                city.push_back(x);
                city.push_back(y);
                kount+=2;
                    }
                    else
                    {
                         city.push_back(x);
                         kount++;
                    }

            }
            else if((itx==city.end())||(ity==city.end()))
            {
                if(itx==city.end())
                {
                    kount+=1;
                    city.push_back(x);
                }
                else
                {
                    kount+=1;
                    city.push_back(y);
                }
            }

        }
        cout<<kount<<endl;
    }



}
