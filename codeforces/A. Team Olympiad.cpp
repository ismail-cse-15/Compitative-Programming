#include<bits/stdc++.h>
using namespace std;
int flag_array[5010];
int main()
{
    int n,value_t[5010],no_of_one=0,no_of_two=0,no_of_three=0,no_of_team;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>value_t[i];
        if(value_t[i]==1)
            no_of_one++;
        else if(value_t[i]==2)
            no_of_two++;
        else
            no_of_three++;
    }
    no_of_team=min(no_of_one,no_of_two);
    no_of_team=min(no_of_team,no_of_three);
    cout<<no_of_team<<endl;
    if(no_of_team>0)
    {
       int teamm_pointer,current_team_no=0,team_memeber_no;
       for(int i=1;i<=no_of_team;i++)
       {
           teamm_pointer=0,team_memeber_no=0;
           for(int j=1;j<=n;j++)
           {

             if(flag_array[j]==0)
             {
                 if(teamm_pointer==0)
                 {
                     teamm_pointer+=value_t[j];
                     flag_array[j]=1;
                     team_memeber_no++;
                     cout<<j<<" ";
                 }
                 else if(teamm_pointer==1 &&(value_t[j]==2 || value_t[j]==3))
                 {
                   teamm_pointer+=value_t[j];
                     flag_array[j]=1;
                     team_memeber_no++;
                     cout<<j<<" ";
                 }
                   else if(teamm_pointer==2 && (value_t[j]==1 || value_t[j]==3))
                 {
                   teamm_pointer+=value_t[j];
                     flag_array[j]=1;
                       team_memeber_no++;
                     cout<<j<<" ";
                 }
                   else if(teamm_pointer==3 )
                 {
                     if(team_memeber_no==1 && (value_t[j]==2 || value_t[j]==1))
                     {
                       teamm_pointer+=value_t[j];
                    team_memeber_no++;
                     flag_array[j]=1;
                     cout<<j<<" ";
                     }
                     else if(team_memeber_no==2 && value_t[j]==3)
                     {
                       teamm_pointer+=value_t[j];
                     flag_array[j]=1;
                      team_memeber_no++;
                     cout<<j<<endl;
                     break;
                     }

                 }
//                   else if(teamm_pointer==3 &&  team_memeber_no== 2 && value_t[j]==3 )
//                 {
//                   teamm_pointer+=value_t[j];
//                     flag_array[j]=1;
//                      team_memeber_no++;
//                     cout<<j<<endl;
//                 }
                   else if(teamm_pointer==5 && value_t[j]==1 )
                 {
                   teamm_pointer+=value_t[j];
                     flag_array[j]=1;
                       team_memeber_no++;
                       current_team_no++;
                     cout<<j<<endl;
                     break;
                 }
                   else if(teamm_pointer==4 && value_t[j]==2 )

                 {
                   teamm_pointer+=value_t[j];
                     flag_array[j]=1;
                       team_memeber_no++;
                       current_team_no++;
                     cout<<j<<endl;
                     break;
                 }
             }
           }
       }



    }

    return 0;
}

