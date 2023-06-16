#include<bits/stdc++.h>
using namespace std;
class node 
{
public:
    int val;
    node* next;
    node(int val) 
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node*& head, int v) 
{
    node* new_node = new node(v);

    if (head == NULL) 
    {
        head = new_node;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = new_node;
}


int size(node* head) 
{
    node* tmp = head;
    int count = 0;
    while (tmp != NULL) 
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
 {
    node* head = NULL;
    int v;
    while (true) 
    {
        cin >> v;
        if (v == -1) break;
        else insert_at_tail(head, v);
    }

    for (node* i = head; i->next != NULL; i = i->next) 
    {
        for (node* j = i->next; j != NULL; j = j->next)
         {
            if (i->val < j->val) 
            {
                swap(i->val, j->val);
            }
        }
    }

    int listSize = size(head);
    if (listSize % 2 == 0 && listSize >= 2) 
    {
        int mid = listSize / 2;
        node* temp = head;
        for (int i = 1; i < mid; i++) 
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
    } 
    else if (listSize % 2 == 1) 
    {
        int mid = listSize / 2;
        node* temp = head;
        for (int i = 1; i <=mid; i++)
         {
            temp = temp->next;
        }
        cout << temp->val;
    }

    return 0;
}
