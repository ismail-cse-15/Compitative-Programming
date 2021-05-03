#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{
    int matrix[10][10];
    int row,column;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]!=0)
            {
                row=i;
                column=j;
            }
        }
    }
    movement=abs(row-3)+abs(column-3);
    printf("%d\n",movement);
    return 0;

}
