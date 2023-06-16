
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node * n)
{
    if(n==NULL) return;
     print_reverse(n->next);
     cout<<n->val<<" ";
}

int main()
{
    Node * head=NULL;
    Node * tail=NULL;

    int v;
    while(true)
    {
        cin>>v;
        if(v==-1)
        {
            break;
        }
        else insert_tail(head,tail,v);

    }

    for(Node * i=head;i->next != NULL; i=i->next )
    {
        for(Node * j=i->next; j != NULL; j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }

    print_linekd_list(head);

    cout<< endl;
    print_reverse(head);

    return 0;
}
