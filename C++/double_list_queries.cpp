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

void print_reverse(Node* tail) 
{
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_position(Node* head, int pos, int val) 
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i <= pos - 1; i++) 
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

void insert_at_head(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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
    int n;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;

    while (n--) 
    {
        int pos, val;
        cin >> pos >> val;

        int size = 0;
        Node* temp = head;
        while (temp != NULL) 
        {
            size++;
            temp = temp->next;
        }

        if ( pos > size) 
        {
            cout << "Invalid" << endl;
            continue;
        }

        if (pos == 0) 
        {
            insert_at_head(head, tail, val);
        } 
        else if (pos == size) 
        {
            insert_at_tail(head, tail, val);
        } 
        else 
        {
            insert_at_position(head, pos, val);
        }

        print_normal(head);
        print_reverse(tail);
    }

    return 0;
}
