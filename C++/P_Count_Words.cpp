#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int count=0;
  bool indside_word=false;
  for(char c:s)
  {
    if(isalpha(c)>0)
    {
        if(indside_word==false)
        {
            count++;   
        }
        indside_word=true;
    }
     else
    {
        indside_word=false;
     }
  }
   cout<<count;
    return 0;
}