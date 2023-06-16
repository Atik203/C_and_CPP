#include <bits/stdc++.h>
using namespace std;

class node 
{
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node*& head, node*& tail, int v)
{
    node* new_node = new node(v);

    if (head == NULL) 
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void insert_at_head(node*& head, node*& tail, int v) 
{
    node* new_node = new node(v);

    if (head == NULL) 
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head = new_node;
}

void print_it(node* head, node* tail) 
{

    cout << head->val << " " << tail->val << endl;
}

int main() 
{
    int n;
    cin >> n;
    node* head = NULL;
    node* tail = NULL;

    while (n--) 
    {
        int x, v;
        cin >> x >> v;

        if (x == 0) 
        {
            insert_at_head(head, tail, v);
        } 
        else 
        {
            insert_at_tail(head, tail, v);
        }

        print_it(head, tail);
    }

    return 0;
}