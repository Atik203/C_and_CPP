#include<bits/stdc++.h>
using namespace std;
class cricketer
{
  public:
  int jersey_no;
  char country[100];

};
int main()
{
    cricketer *dhoni=new cricketer;
    char desh[100]="India";
    strcpy(dhoni->country,desh);
    dhoni->jersey_no=18;

    cricketer *kholi=new cricketer;
     
     //*kholi=*dhoni; this is also worked;
    strcpy(kholi->country, dhoni->country);
    kholi->jersey_no=dhoni->jersey_no;

     delete dhoni;

     cout<<kholi->country<<endl<<kholi->jersey_no;
   
    return 0;
}