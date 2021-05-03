#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int movement;
int main()
{
 long long int a,b,a_b,total_possible,day_1=0,day_2=0,tamp,check;

queue<long long int > my_queue1,my_queue2;
cin>>a>>b;
a_b=a+b;
total_possible=sqrt((8*a_b)+1)/2;
//if((total_possible*(total_possible+1))/2!=(a_b))
//    total_possible-=1;
tamp=total_possible;
//cout<<total_possible<<endl;
if(tamp==0)
{
    cout<<0<<endl;
    cout<<0<<endl;
}





else{
  if(a>=b)
{
 for(int i=1;i<=total_possible;i++)
{


if(b-tamp>=0 && b!=0)
{
  my_queue2.push(tamp);
  //cout<<"my_quequ1 : "<<tamp<<endl;
  day_2++;
  b-=tamp;
  tamp--;

}
//else if(b-tamp>=0)
else
{
 my_queue1.push(tamp);
  //cout<<"my_quequ2 : "<<tamp<<endl;
  day_1++;
  a-=tamp;
  tamp--;
}


}
}

else
{
 for(int i=1;i<=total_possible;i++)
{


if(a-tamp>=0 && a!=0)
{
  my_queue1.push(tamp);
  //cout<<"my_quequ1 : "<<tamp<<endl;
  day_1++;
  a-=tamp;
  tamp--;

}
//else if(b-tamp>=0)
else
{
 my_queue2.push(tamp);
  //cout<<"my_quequ2 : "<<tamp<<endl;
  day_2++;
  b-=tamp;
  tamp--;
}


}
}


long long int y;
cout<<day_1<<endl;
for(int i=1;i<day_1;i++)
{
  y= my_queue1.front() ;
  my_queue1.pop();

 cout<<y<<" ";
}

y=my_queue1.front();
if(day_1!=0)
cout<<y<<endl;
cout<<day_2<<endl;
for(int i=1;i<day_2;i++)
{
    y=my_queue2.front();
    my_queue2.pop();
    cout<<y<<" ";
}
y=my_queue2.front();
 if(day_2!=0)
cout<<y<<endl;
}

    return 0;

}




