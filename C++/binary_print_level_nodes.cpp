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
void print_node_level(node *root, int n)
{
    int tree_level = -1;

    queue<pair<node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<node *, int> pr = q.front();
        node *f = pr.first;
        int level = pr.second;
        q.pop();
        if (level > tree_level)
        {
            tree_level = level;
        }
        if (level == n)
        {
            cout << f->val << " ";
        }
        if (f->left)
        {
            q.push({f->left, level + 1});
        }
        if (f->right)
        {
            q.push({f->right, level + 1});
        }
    }
    if (tree_level < n)
    {
        cout << "Invalid";
    }
}

int main()
{
    node *root = input_tree();
    int n;
    cin >> n;
    print_node_level(root, n);

    return 0;
}
