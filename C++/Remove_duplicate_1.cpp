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
void sort(node *head)
{
    node * temp=head;
    for(node * i=temp;i->next!= NULL;i=i->next)
    {
        for(node * j=i->next;j != NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void remove_dupticate(node * &head)
{
    node * temp=head;
    while(temp->next != NULL)
        {
            if(temp->val == temp->next->val)
            {
                temp->next=temp->next->next;
            }
            if(temp->next == NULL) break;
            else if(temp->val != temp->next->val)
            {
                temp=temp->next;
            }
        }

}
void print_it(node *head)
{
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
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        else
        {
            insert_at_tail(head,v);
        }
    }
    sort(head);
    remove_dupticate(head);
    print_it(head);
   
    return 0;
}