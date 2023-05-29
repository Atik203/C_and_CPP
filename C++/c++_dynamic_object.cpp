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
    char name[100]="Atik";
    //Student a(name,'A',1,12);
   Student *a= new Student(name,'A',1,12);

   cout<<(*a).name<<" ";
   cout<<(*a).cls<<" ";
   cout<<(*a).roll<<" ";
   cout<<(*a).sec<<endl;
// shortcut arrow sign '->'

   cout<<a->name<<" ";
   cout<<a->cls<<" ";
   cout<<a->roll<<" ";
   cout<<a->sec<<endl;

   // delete object
   delete a;
    return 0;
}