#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:

   node * head=NULL;
   node * tail=NULL;
   int sz=0;
    void push(int val)
    {
        sz++;
        node *  new_node=new node(val);
        if(head==NULL)
        {
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->prev=tail;
        tail->next=new_node;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        node * deleteNode=tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
           {
            return true;
           }
        else
        {
           return false;
        }   
           
    }
};
class myQueue
{
   public:
   node * head=NULL;
   node * tail=NULL;
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
      new_node->prev=tail;
      tail=tail->next;
   }
   void pop()
   {
    sz--;
    node * delete_node = head;
    head = head->next;
    if(head == NULL)
    {
        tail =  NULL;
        delete delete_node;
        return;
    }
    head->prev=NULL;
    delete delete_node;
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
    myStack st;
    int n,m;
    cin >> n>>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    myQueue q;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
   }
    bool flag = true;
    if(st.size() == q.size())
    {
        while (!st.empty() && !q.empty())
        {
            int a=st.top();
            int b=q.front();
            if(a != b)
            {
                flag=false;
                break;
            }
            else
            {
                st.pop();
                q.pop();
            }    
        }
    }
    else
    {
        flag = false;
    }
   if(flag == true) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   
    return 0;
}