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
void palindrome(node * head,node * tail)
{
 node *  temp1=head;
 node * temp2=tail;
 bool flag=true;
  while (temp1 != NULL && temp2!= NULL)
  {
    if(temp1->val != temp2->val)
    {
        flag=false;
        break;
    }
     temp1 = temp1->next;
     temp2 = temp2->prev;
  }

  if(flag==true) cout<<"YES";
  else cout<<"NO";
  
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
   palindrome(head,tail);
    return 0;
}