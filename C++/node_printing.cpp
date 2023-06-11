#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
   node* head=new node(5);
   node* a=new node(10);
   node* b=new node(20);
   node* c=new node(30);
   node* d=new node(40);
   node* e=new node(50);
 
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;

   node* temp=head;
   while(temp!=NULL)
   {
    cout<<temp->val<<" ";
    temp=temp->next;
   }
   cout<<endl;
   temp=head;
   while (temp!=NULL)
   {
    cout<<temp->val<<" ";
    temp=temp->next;
   }

    return 0;
}