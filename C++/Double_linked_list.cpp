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
void insert_head(node * &head,node *&tail,int v)
{
    node * new_node=new node(v);
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}
void insert_tail(node * &head,node *&tail,int v)
{
    node * new_node=new  node(v);
    if(tail==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next=new_node;
    new_node->prev=tail;
    tail=tail->next;
}
void insert_at_position(node * head,int pos,int v)
{
    node * new_node=new node(v);
    node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    new_node->next=temp->next; // 100-> 30
    temp->next=new_node; // 20-> 100
    new_node->next->prev=new_node; // 100 <- 30
    new_node->prev=temp; // 20 <- 100
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
    
    int pos,v;
    cin>>pos>>v;
     if(pos>size(head))
    {
        cout<<"INVALID"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,tail,v);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,v);
    }
    else
    {
        insert_at_position(head,pos,v);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
}