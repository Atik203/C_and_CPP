#include<bits/stdc++.h>
using namespace std;

class node
{

public:
    int val;
    node * next;

    node(int val)
    {
        this->next=NULL;
        this->val=val;
    }

};

void insert_at_tail(node *&head,int v)
{

    node* new_node=new node (v);

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

void print_it(node *head)
{
    cout<<"Your linked list: ";
    node * temp=head;

    while(temp != NULL)
    {

        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main()
{
    node * head= NULL;

    while(true)
    {
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: print linked lis"<<endl;
        cout<<"Option 3: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter the value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_it(head);
        }
        else
        {
            break;
        }

    }




    return 0;
}
