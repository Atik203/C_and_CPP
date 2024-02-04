#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int size(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_normal(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_head(node *&head, int v)
{
    node *new_node = new node(v);
    new_node->next = head;
    head = new_node;
}

void insert_tail(node *&head, int v)
{
    node *new_node = new node(v);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insert_at_position(node *&head, int pos, int v)
{
    node *new_node = new node(v);
    if (pos == 0)
    {
        insert_head(head, v);
        return;
    }

    node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        if (temp == NULL)
        {
            cout << "INVALID" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "INVALID" << endl;
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{
    node *head = new node(10);

    int pos, v;
    cin >> pos >> v;

    if (pos > size(head))
    {
        cout << "INVALID" << endl;
    }
    else
    {
        insert_at_position(head, pos, v);
        print_normal(head);
    }

    return 0;
}
