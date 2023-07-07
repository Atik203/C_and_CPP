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
class myQueue
{
    public:
    node * head = NULL;
    node * tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        node * new_node = new node(val);
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next=new_node;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        node * delete_node = head;
        head= head->next;
        delete delete_node;
        if(head == NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
      if(sz == 0)
      { 
        return true;
      }
      else
      {
        return false;
      }
    }

};

int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
   
    return 0;
}