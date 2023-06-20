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
void insert_at_tail(node *&head,node *&tail,int v)
{
    node * new_node=new node(v);
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
void compare(node * head,node * head1)
{
  node * temp1=head;
  node * temp2=head1;
  bool flag=true;
  while(temp1 != NULL && temp2!=NULL)
  {
    if(temp1->val != temp2->val)
    {
        flag=false;
        break;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
  if(temp1 != NULL || temp2!= NULL)
  {
    flag=false;
  }
  if(flag==true) cout<<"YES";
  else cout<<"NO";
}
int main()
{
   node * head=NULL;
   node * head1=NULL;
   node * tail=NULL;
   node * tail1=NULL;
   int v,v2;
   while(true)
   {
    cin>>v;
    if(v==-1) break;
    else insert_at_tail(head,tail,v);
   }
    while(true)
   {
    cin>>v2;
    if(v2==-1) break;
    else insert_at_tail(head1,tail1,v2);
   }
   compare(head,head1);
    return 0;
}