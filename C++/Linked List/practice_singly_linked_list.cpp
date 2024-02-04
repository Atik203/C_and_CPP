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
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

void print_normal(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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

void delete_head(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

void delete_tail(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    int sz = size(head);
    cout << sz << endl;
    print_normal(head);
    return 0;
}