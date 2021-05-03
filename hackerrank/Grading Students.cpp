#include<bits/stdc++.h>
using namespace std;
#define sci(a) scanf("%d",&a)
#define pfi(a) printf("%d",a)
#define pn printf("\n")
int main()
{
    int n;
    sci(n);
    while(n--)
    {
        int grade,num,next;
        sci(grade);
        num=grade/5;
        next=(num+1)*5;
        (grade<38)?pfi(grade):(abs(next-grade)<3)?pfi(next):pfi(grade);
        pn;
    }
    return 0;

}
