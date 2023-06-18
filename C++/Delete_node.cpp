#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
   node * prev;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

int size(node * head)
{
    node * temp=head;
    int count = 0 ;
    while (temp!=0)
    {
        count++;
        temp=temp->next;
    }
    return count; 
}
void print_normal(node * head)
{
    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void print_reverse(node * tail)
{
    node *temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void delete_at_position(node *head,int pos)
{
    node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    node * delete_node=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete delete_node;
}
void delete_head(node * &head,node *&tail)
{
    node * delete_node=head;
   head=head->next;
   delete delete_node;
  if(head==NULL)
  {
    tail=NULL;
    return;
  }
   head->prev=NULL;

}
void delete_tail(node *&head,node *&tail)
{
   node * delete_node=tail;
   tail=tail->prev;
   delete delete_node;
  if(tail==NULL)
  {
    head=NULL;
    return;
  }
   tail->next=NULL;
}
int main()
{
    node * head=new node(10);
    node * a=new node (20);
    node * b=new node (30);
    node * c=new node (40);
    node * tail=c;
    
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    
    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"Invalid";
    }
    else if(pos==size(head)-1)
    {
        delete_tail(head,tail);
    }
    else if(pos==0)
    {
        delete_head(head,tail);
    }
    else 
    {
       delete_at_position(head,pos);
    }
    
    print_normal(head);
    print_reverse(tail);

    return 0;
}