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
void print_recursion(node * n)
{
    if(n==NULL)  return;
    cout<<n->val<<" ";
    print_recursion(n->next);
}
void print_reverse(node * n)
{
    if(n==NULL)  return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}

void insert_tail(node *&head, node *&tail, int val)
{
    node *new_node = new node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}
int main()
{
    node *  head=NULL;    
   node * tail=NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        else insert_tail(head,tail,v);
    }
    print_reverse(head);
     cout<<endl;
    print_recursion(head);
   
    
   
    return 0;
}