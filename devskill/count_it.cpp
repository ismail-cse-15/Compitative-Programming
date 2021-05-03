#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
    string s;
    vector<int>sum(30,0);
    vector<int>flag(30,0);
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
        {
            sum[0]+=1;
            flag[0]=1;
        }
        else if(s[i]=='b')
        {
            sum[1]+=1;
            flag[1]=1;
        }
         else if(s[i]=='c')
        {
            sum[2]+=1;
            flag[2]=1;
        }
         else if(s[i]=='d')
        {
            sum[3]+=1;
            flag[3]=1;
        }
         else if(s[i]=='e')
        {
            sum[4]+=1;
            flag[4]=1;
        }
         else if(s[i]=='f')
        {
            sum[5]+=1;
            flag[5]=1;
        }
         else if(s[i]=='g')
        {
            sum[6]+=1;
            flag[6]=1;
        }
         else if(s[i]=='h')
        {
            sum[7]+=1;
            flag[7]=1;
        }
         else if(s[i]=='i')
        {
            sum[8]+=1;
            flag[8]=1;
        }
         else if(s[i]=='j')
        {
            sum[9]+=1;
            flag[9]=1;
        }
         else if(s[i]=='k')
        {
            sum[10]+=1;
            flag[10]=1;
        }
         else if(s[i]=='l')
        {
            sum[11]+=1;
            flag[11]=1;
        }
         else if(s[i]=='m')
        {
            sum[12]+=1;
            flag[12]=1;
        }
         else if(s[i]=='n')
        {
            sum[13]+=1;
            flag[13]=1;
        }
         else if(s[i]=='o')
        {
            sum[14]+=1;
            flag[14]=1;
        }
         else if(s[i]=='p')
        {
            sum[15]+=1;
            flag[15]=1;
        }
         else if(s[i]=='q')
        {
            sum[16]+=1;
            flag[16]=1;
        }
         else if(s[i]=='r')
        {
            sum[17]+=1;
            flag[17]=1;
        }
         else if(s[i]=='s')
        {
            sum[18]+=1;
            flag[18]=1;
        }
         else if(s[i]=='t')
        {
            sum[19]+=1;
            flag[19]=1;
        }
         else if(s[i]=='u')
        {
            sum[20]+=1;
            flag[20]=1;
        }
         else if(s[i]=='v')
        {
            sum[21]+=1;
            flag[21]=1;
        }
         else if(s[i]=='w')
        {
            sum[22]+=1;
            flag[22]=1;
        }
         else if(s[i]=='x')
        {
            sum[23]+=1;
            flag[23]=1;
        }
         else if(s[i]=='y')
        {
            sum[24]+=1;
            flag[24]=1;
        }
         else
        {
            sum[25]+=1;
            flag[25]=1;
        }
    }
    cout<<"Case "<<j<<":"<<endl;
    for(int i=0;i<26;i++)
    {
        if((flag[i]==1)&&(i==0))
            cout<<"a "<<sum[i]<<endl;
        else if((flag[i]==1)&&(i==1))
            cout<<"b "<<sum[i]<<endl;
        else if((flag[i]==1)&&(i==2))
            cout<<"c "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==3))
            cout<<"d "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==4))
            cout<<"e "<<sum[i]<<endl;

            else if((flag[i]==1)&&(i==5))
            cout<<"f "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==6))
            cout<<"g "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==7))
            cout<<"h "<<sum[i]<<endl;

            else if((flag[i]==1)&&(i==8))
            cout<<"i "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==9))
            cout<<"j "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==10))
            cout<<"k "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==11))
            cout<<"l "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==12))
            cout<<"m "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==13))
            cout<<"n "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==14))
            cout<<"o "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==15))
            cout<<"p "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==16))
            cout<<"q "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==17))
            cout<<"r "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==18))
            cout<<"s "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==19))
            cout<<"t "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==20))
            cout<<"u "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==21))
            cout<<"v "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==22))
            cout<<"w "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==23))
            cout<<"x "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==24))
            cout<<"y "<<sum[i]<<endl;
            else if((flag[i]==1)&&(i==25))
            cout<<"z "<<sum[i]<<endl;

    }


    }
    return 0;
}
