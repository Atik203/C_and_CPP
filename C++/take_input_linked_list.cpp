#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node * next;

    node (int val)
    {
        this->val=val;
        this->next=NULL;

    }

};


void insert_at_tail(node *&head,int v)   // insert at tail
{
  node * new_node= new node(v);

  if(head==NULL)
  {
      head=new_node;
      return;
  }

    node * temp=head;

    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;

}


void print_it(node *head) // printing
{
    cout<<"your linked list: ";
    node * temp=head;
    while(temp !=NULL)
    {
        cout<<temp->val<<" " ;
        temp=temp->next;
    }
    cout<<endl;
}


int main()      //  main function
{
    node * head=NULL;

   int v;

   while(true )
   {
       cin>>v;
       if(v==-1) break;
       else insert_at_tail(head,v);

   }
  print_it(head);

  return 0;
}




