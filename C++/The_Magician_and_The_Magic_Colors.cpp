#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

while(t--)
{
    queue<char>inputQ;
    stack <char>tempSt;
    queue <char>mixQ;
    
      int n;
      cin>>n;

 char c;
for(int i=0;i<n;i++) 
{
  cin>>c;

 inputQ.push(c);

}
while(!inputQ.empty())
{
    char s=inputQ.front();
    inputQ.pop();
char t;
if(tempSt.empty()) 
   {
      tempSt.push(s);
      t=tempSt.top();
   }
else
    {

 if((s=='R' && t=='B') || (s=='B' && t=='R'))
    {
         tempSt.pop();
        mixQ.push('P');

    }

 else if((s=='R' && t=='G') || (s=='G' && t=='R')) 
    {

        tempSt.pop();
        mixQ.push('Y');
    }

 else if((s=='B' && t=='G') || (s=='G' && t=='B'))
    {
         tempSt.pop();
        mixQ.push('C');
    }

else if(s=='B' && tempSt.top()=='B' )
   {
    tempSt.pop();
   }
else if(s=='R' && tempSt.top() =='R')
   {
    tempSt.pop();
   }
else if(s=='G' && tempSt.top() =='G')
   {
    tempSt.pop();
   }
  }
}
stack <char>mixSt;
while(!mixQ.empty())
{
   char n=mixQ.front();
    mixQ.pop();
    char t;
if(mixSt.empty())
   {
    mixSt.push(n); 
    t=mixSt.top();
   }
else
    {
     if(n==t)
     {
         mixSt.pop();
         if(!mixSt.empty())
         {
              t=mixSt.top();
         }
     }
    else if(n!=t)
     {
         mixSt.push(n);
         t=mixSt.top();
     }
    }

}
stack <char>result;
while(!mixSt.empty())
{
    char p=mixSt.top();
    mixSt.pop();
    result.push(p);

}
while(!result.empty())
{
    char p=result.top();
    result.pop();
    cout<<p;

}

while(!tempSt.empty())
{
    char m=tempSt.top();
    tempSt.pop();
    cout<<m;
}
cout<<endl;

}

}
