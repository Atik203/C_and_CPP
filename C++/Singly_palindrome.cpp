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

void insert_at_tail(node *&head, node *&tail, int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
void reverse_it(node *&head, node *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse_it(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

int main()
{
    node * head=NULL;
    node * tail=NULL;
    node * new_head=NULL;
    node * new_tail=NULL;
    
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        else
        {
            insert_at_tail(head,tail,v);
        }
}
node * temp=head;
while (temp != NULL)
   {
    insert_at_tail(new_head,new_tail,temp->val);
    temp=temp->next;
   }

reverse_it(new_head,new_head);

   bool flag=true;
   temp=head;
   node * temp1=new_head;
   while (temp != NULL)
   {
    if(temp->val != temp1->val)
    {
        flag=false;
        break;
    }
    temp = temp->next;
    temp1 = temp1->next;
   }
   if(flag==true) cout<<"YES";
   else cout<<"NO";
   
    return 0;
}