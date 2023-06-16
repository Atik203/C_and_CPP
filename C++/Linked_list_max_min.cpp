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

int maximum(node * head)
{
  int mx=INT_MIN;
  node * temp=head;
  while(temp != NULL)
  {
    if(temp->val>mx)
    {
      mx=temp->val;
    }
    temp=temp->next;
  }
 return mx;
}

int minimum(node * &head)
{
  int mn=INT_MAX;
  node * temp=head;
  while (temp != NULL)
  {
    if(mn>temp->val)
    {
      mn=temp->val;
    }
    temp=temp->next;
  }
  return mn;
}
void insert_at_tail(node * &head,int v)
{
  node *  new_node= new node(v);

  if(head==NULL)
  {
    head=new_node;
    return;
  }
  node *temp=head;
  while (temp->next != NULL)
  {
    temp=temp->next;
  }
  temp->next=new_node;

}

int main()
{
   node * head=NULL;
   int v;
   while (true)
   {
    cin>>v;
    if(v==-1) break;
    else insert_at_tail(head,v);
   }
   int m=maximum(head);
   int mi=minimum(head);

   cout<<m<<" "<<mi<<endl;
    return 0;
}