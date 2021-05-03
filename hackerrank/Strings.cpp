#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
string a,b;
cin>>a>>b;
int x,y;
x=a.size();
y=b.size();
cout<<x<<" "<<y<<endl<<(a+b)<<endl;
swap(a[0],b[0]);
cout<<a<<" "<<b<<endl;

    return 0;
}


