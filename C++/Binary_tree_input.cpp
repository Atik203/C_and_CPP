#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1st step take root
        node *f = q.front();
        q.pop();

        // 2nd step then print root
        cout << f->val << " ";

        // 3rd step take root's children
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
node *input_tree()
{
    int val;
    cin >> val;
    node *root;
    if (val == -1)
        root = NULL;
    else
        root = new node(val);
    queue<node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1st step
        node *p = q.front();
        q.pop();
        // 2nd step
        int l, r;
        cin >> l >> r;
        node *myLeft;
        node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new node(r);

        p->left = myLeft;
        p->right = myRight;
        // 3rd step
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int main()
{
    node *root = input_tree();
    level_order(root);
    return 0;
}