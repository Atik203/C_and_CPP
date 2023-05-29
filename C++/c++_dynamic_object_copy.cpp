#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        
        }
       
};
int main()
{
    Person *rakib=new Person("Rakib Ahsan",24);
    Person *atik=new Person("Atikur Rahaman",20);
   *rakib=*atik;
    cout<<rakib->age<<endl;
    cout<<rakib->name<<endl;
    return 0;
}