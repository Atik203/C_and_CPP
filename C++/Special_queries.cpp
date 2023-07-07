#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
   int Q;
   cin>>Q;
   while (Q--)
   {
    
    char c;
    cin>>c;
     if(c=='0')
     {
        string s;
        cin>>s;
        q.push(s);
     }
     else
     {
        if(q.size()==0)
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            cout<<q.front()<<endl;
            q.pop();
        }
     }
   }
   
    return 0;
}