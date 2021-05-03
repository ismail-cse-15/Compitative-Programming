#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1010],m,l[1010],r[1010],p=0,requiredtime=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
       requiredtime+=a[i];
    }
    cin>>m;
    for(int i=0;i<m;)
    {
        cin>>l[i]>>r[i];
         if(((requiredtime==l[i])&&(p==0))&&(p==0)){
            cout<<l[i]<<endl;
            p=1;
            i++;
         }
           else if((requiredtime==r[i])&&(p==0)){
            cout<<r[i]<<endl;
            p=1;
           i++;
         }
         else if(((requiredtime>l[i])&&(requiredtime<r[i]))&&(p==0))
         {


                    cout<<requiredtime<<endl;
                     p=1;
                     i++;



         }
         else if((l[i]>requiredtime)&&(p==0)){
            cout<<l[i]<<endl;
            p=1;
            i++;
         }
         else
            i++;

    }

    if(p==0)
        cout<<-1<<endl;


    return 0;
}
