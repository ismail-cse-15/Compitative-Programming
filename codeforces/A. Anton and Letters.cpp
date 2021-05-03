#include<iostream>
#include<bits/algorithmfwd.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{

  set<char> character_set;
  char character;
  while(scanf("%c",&character)!=EOF){
        //cout<<character<<endl;
    if(character!=',' && character!='{' && character!='}' && character!=' ')
        character_set.insert(character);
  }

  cout<<character_set.size()-1<<endl;


//  set<char>:: iterator it;
//  for(it=character_set.begin();it!=character_set.end();it++)
//    cout<<"\t"<<*it;

    return 0;

}


