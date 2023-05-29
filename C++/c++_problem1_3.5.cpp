#include<bits/stdc++.h>
using namespace std;
class student
{
 public:
    char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;

    student(char *n,int r,char s,int m,int c)
    {
        strcpy(name,n);
        roll=r;
        section=s;
        math_marks=m;
        cls=c;

    }
};
int main()
{
    char n1[100]="Rahim";
    char n2[100]="Karim";
    char n3[100]="Atik";
    student a(n1,20,'A',78,9);
    student b(n2,5,'B',87,9);
    student c(n3,1,'C',98,9);

    if(a.math_marks>b.math_marks && a.math_marks>c.math_marks)
    {
        cout<<a.name;
    }
    else if(b.math_marks>a.math_marks && b.math_marks>c.math_marks)
    {
        cout<<b.name;
    }
    else
    {
        cout<<c.name;
    }
   
    return 0;
}