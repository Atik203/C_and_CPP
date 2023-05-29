#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss) // reference
{
    string word;
    if(ss>>word) 
   {
      // cout<<word<<endl; 
      print(ss);
      cout<<word<<endl;
   }
}
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);
   print(ss);
//    string word;
//    while(ss>>word) 
//    {
//       cout<<word<<endl;
//    }
    return 0;
}