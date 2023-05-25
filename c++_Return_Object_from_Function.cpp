#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Rahim Ullah";
    Student rahim(29,'C',7,name);
    return rahim;
}
int main()
{ 
    // RVO = Return Value Optimization
    Student rahim=fun();

    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    return 0;
}