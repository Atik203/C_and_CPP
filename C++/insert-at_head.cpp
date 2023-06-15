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

void insert_at_tail(node *&head,int v)
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

void insert_at_position(node * head,int pos,int v)
{
   node * new_node=new node(v);
   node * temp=head;

   for(int i=1;i<=pos-1;i++)
   {
       temp=temp->next;
   }
   new_node->next=temp->next;
   temp->next=new_node;

   cout << endl<< endl<< "Inserted at position " << pos << endl<< endl;


}

void insert_at_head(node * & head,int v)
{
  node *new_node=new node(v);

  new_node->next=head;
  head=new_node;
cout<<endl;

}

void delete_from_position(node * head,int pos)
{
    node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }

    node* delete_node= temp->next;
    temp->next=temp->next->next;

    delete delete_node;
}
void print_it(node *head)
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

int main()
{
    node * head=NULL;

    while(true)
    {
    cout<<"Option 1: Insert at tail"<<endl;
     cout<<"Option 2: print linked lis"<<endl;
     cout<<"Option 3: Insert at any position"<<endl;
    cout<<"Option 4: Insert at head"<<endl;
     cout<<"Option 5: Delete from position"<<endl;

     int op;
     cin>>op;

     if(op==1)
     {
         cout<<"enter the value: ";
         int v;
         cin>>v;

          insert_at_tail(head,v);
     }
     else if(op==2)
     {
         print_it(head);
     }
     else if(op==3)
     {
                   int pos, v;
            cout << "Enter position: ";
            cin >> pos;

            cout << "Enter value: ";

            cin >> v;
               if(pos==0)
            {
                insert_at_head(head,v);
            }
            else    insert_at_position(head, pos, v);
     }
     else if(op==4)
     {
         int v;
         cout<<"enter value: "<<endl;
         cin>>v;
         insert_at_head(head,v);
     }
     else if(op==5)
     {
         int pos;
         cout<<"enter position: ";
         cin>>pos;
         delete_from_position(head,pos);
     }
     else break;


    }



}

