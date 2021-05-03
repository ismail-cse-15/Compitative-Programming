#include <stdio.h>
#include<bits/stdc++.h>
#include <math.h>
using namespace std;

void update(int *a,int *b) {
    int  sum,diff;
    sum=(*a)+(*b);
    diff=(*a)-(*b);
    diff=abs(diff);
     cout<<sum<<endl;
    cout<<diff<<endl;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
