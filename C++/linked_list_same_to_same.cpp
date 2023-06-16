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

void compare(node* head1, node* head2) {
    node* temp1 = head1;
    node* temp2 = head2;
    bool flag = true; // Initialize flag as true

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val != temp2->val) {
            flag = false; // Set flag to false if a mismatch is found
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    // Check if both lists have reached the end
    if (temp1 != NULL || temp2 != NULL)
        flag = false; // Set flag to false if the sizes are different

    if (flag)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    node * head1=NULL;
    node * head2=NULL;
    int v,n;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        else
        {
           insert_at_tail(head1,v);
        }
    }
     while(true)
    {
        cin>>n;
        if(n==-1) break;
        else
        {
           insert_at_tail(head2,n);
        }
    }
   compare(head1,head2);
    return 0;
}