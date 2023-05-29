#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    char sec;
    int roll;
    int cls;

    Student(char *n,char s,int r,int c)
    {
      strcpy(name,n);
      sec=s;
      roll=r;
      cls=c;

    }

};
int main()
{
    Student a("Atikur",'A',1,12);

    Student b("Rahim",'C',34,10);

   cout<<a.name<<" ";
   cout<<a.cls<<" ";
   cout<<a.roll<<" ";
   cout<<a.sec<<endl;

  cout<<b.name<<" ";
   cout<<b.cls<<" ";
   cout<<b.roll<<" ";
   cout<<b.sec;
    return 0;
}