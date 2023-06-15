#include<bits/stdc++.h>
using namespace std;

class node()
{

    public:
    int val;
    node * next;

    node(int val,node*next)
    {
        this->next=next;
        this->val=val;
    }

};

void insert_at_tail(node *&head,int v)
{

    node new_node=new node (v);

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

void print(node *head)
{

    node * temp=head;

    while(temp != NULL)
    {
        cout<<"Your linked list: "
        cout<<temp->val<<" ";
        temp=temp->next;
    }
cout<<endl;

}

int main()
{
    node * head=NULL:

        while(true)
        {
        cout<<"option: 1- insert at tail"<<endl;
        cout<<"option: 2-print linked list"<<endl;
        cout<<"option: 3-Terminate\n";

        int op;
        cin>>op;

        if(op==1)
        {
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print(head);
        }
        else break;

        }




    return 0;
}
