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
void insert_at_tail(node *&head,int v)
{
    node * new_node=new node(v);
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

void print_linked_list(node *head)
{
   cout<<"Your linked list: ";

   node *temp=head;
   while(temp!=NULL)
   {
    cout<<temp->val<<" ";
    temp=temp->next;
   }
   cout<<endl<<endl;
}
void insert_at_position(node *head,int pos,int v)
{
    node * new_node=new node(v);
    node * temp=head;
    for(int i=1;i<pos-1;i++)
    {
      temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}
int main()
{
   node * head=NULL;
   while(true)
   {
     cout<<"Option 1: Insert at tail"<<endl;
     cout<<"Option 2: print linked list"<<endl;
     cout<<"Option 3: Insert at any position"<<endl;
     cout<<"Option 4: Terminate"<<endl;
     int op;
     cin>>op;
     if(op==1)
     {
        cout<<endl<<"Enter the value: "<<endl;
       int v;
       cin>>v;
       insert_at_tail(head,v);
     }
     else if(op == 2)
     {
       print_linked_list(head);
     }
     else if(op == 3)
     {
           int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            insert_at_position(head, pos, v);
     }
     else
     {
        break;
     }


   }
    return 0;
}
