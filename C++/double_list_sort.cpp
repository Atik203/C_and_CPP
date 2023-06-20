#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) 
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void ascending_sort(Node* head, Node* tail) 
{
    if (head == NULL || head->next == NULL) return;

    for (Node* i = head; i->next != NULL; i = i->next) 
    {
        for (Node* j = i->next; j != NULL; j = j->next) 
        {
            if (i->val > j->val) 
            {
                swap(i->val, j->val);
            }
        }
    }
}
void print_normal(Node* head) 
{
    Node* tmp = head;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_tail(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (tail == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        else insert_at_tail(head,tail,v);
    }
    ascending_sort(head,tail);
    print_normal(head);
 
    return 0;
}
