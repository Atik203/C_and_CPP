#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="Hello World";
// length of string
   cout<<s.size()<<endl;
// max length of string 10^6 
//  cout<<s.max_size()<<endl;
// s.empty() means
if(s.empty()==true)
{
   cout<<"string is empty"<<endl;
}
else
{
   cout<<"string is not empty"<<endl;
}
   
// s.resize(size) or s.resize(size,'characters') 
s.resize(5);
cout<<s<<endl;
s.resize(7,'A');
cout<<s<<endl;
s.resize(10,'B');
cout<<s<<endl;

return 0;
}
