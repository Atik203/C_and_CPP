#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   string a="Hello";
   string b="World";
   s=a+" "+b;
   cout<<s<<endl;
   // a+=b; same as a.append(b);
   cout<<a+b<<endl;
   a.push_back('A'); // entry last index of a
 cout<<a<<endl;
  string c="HelloAworld";
  // c.erase(5,1)
  // c.erase(which index you want to delete that's starting from,how many you want to delete) and recive 2 parameters
  c.replace(5,1,"_");
  // c.insert(5,"_");
  cout<<c<<endl; 


    return 0;
}