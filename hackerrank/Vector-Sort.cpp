#include <sstream>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;



int main() {
  int n;
  cin>>n;
  vector<int>my_vector;
  my_vector.resize(n);
  for(int i=0;i<n;i++)
  {
      cin>>my_vector[i];
  }
  sort(my_vector.begin(),my_vector.end());
  for(int i=0;i<n-1;i++)
  {
      cout<<my_vector[i]<<" ";
  }
cout<<my_vector[n-1]<<endl;
    return 0;
}

