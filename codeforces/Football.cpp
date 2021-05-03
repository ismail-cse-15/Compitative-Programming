#include<iostream>
using namespace std;
int main()
{
    string t;
    cin>>t;
    int sum=1;
    for(int i=0;t[i]!='\0';i++){
        if (t[i]==t[i+1]){
                sum=sum+1;
        if(sum==7)
            break;
        }
      else if(t[i]!=t[i+1])
        sum=1;
    }

    if(sum==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}
