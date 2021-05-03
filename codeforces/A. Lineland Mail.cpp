#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    stack<int>my_stack;
    int n_1,n_2,s_n,p_n,h_n=0;
    int l_a,l_b;
    l_a=a.size();
    l_b=b.size();
    int i=0;
    l_a--;
    l_b--;
    while(l_a>=0 && l_b>=0)
    {
      n_1=a[l_a]-'0';
      n_2=b[l_b]-'0';
      s_n=n_1+n_2+h_n;
      p_n=s_n%10;
      h_n=s_n/10;
      my_stack.push(p_n);
      l_a--;
      l_b--;
      }

     int p=0;
     if(l_a>0)
     {
         p=1;
     }
     else if(l_b>0)
        p=2;

    if(p==0)
    {
       cout<<h_n<<endl;
       my_stack.push(h_n);
    }

         else if(p==1){
            for(int i=l_a;i!=0;i--)
        {
        n_1=a[i]-'0';
      //n_2=b[l_b]-'0';
      s_n=n_1+h_n;
      p_n=s_n%10;
      h_n=s_n/10;
      my_stack.push(p_n);
      l_a--;
      l_b--;
            }
       cout<<h_n<<endl;
       my_stack.push(h_n);

        }
        else
        {
        for(int i=l_b;i!=0;i--){
        //n_1=a[l_a]-'0';
      n_2=b[i]-'0';
      s_n=n_2+h_n;
      p_n=s_n%10;
      h_n=s_n/10;
      my_stack.push(p_n);
      l_a--;
      l_b--;
            }
            cout<<h_n<<endl;
       my_stack.push(h_n);



        }





   while(!my_stack.empty())
   {
       cout<<my_stack.top();
       my_stack.pop();
   }




}
