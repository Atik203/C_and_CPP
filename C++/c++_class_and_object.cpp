#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    char sec;
    int roll;
    int cls;
};
int main()
{
    Student a;
    a.cls=10;
    a.roll=1;
    a.sec='A';
    char nm1[100]="Atikur rahaman";
    strcpy(a.name,nm1);

    Student b;
    b.cls=11;
    b.roll=34;
    b.sec='B';
    char nm2[100]="Rahim uddin";
    strcpy(b.name,nm2);

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