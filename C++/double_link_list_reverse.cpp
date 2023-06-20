#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_reverse(node *tail)
{
    node * temp=tail;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void insert_at_tail(node *&head,node *&tail,int v)
{
    node * new_node=new node(v);
    while(tail==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next=new_node;
    new_node->prev=tail;
    tail=tail->next;
}

int main()
{
    node * head=NULL;
    node * tail=NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        else insert_at_tail(head,tail,v);
    }
   print_reverse(tail);
    return 0;
}