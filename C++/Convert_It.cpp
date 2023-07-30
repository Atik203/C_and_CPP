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
void insert(node *&root, int x)
{
    if (root == NULL)
    {
        root = new node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    if (x > root->val)
    {
        if (root->right == NULL)
        {
            root->right = new node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}

int findMax(node *root)
{
    if (root == NULL)
        return -1;

    node *current = root;
    while (current->right)
        current = current->right;

    return current->val;
}

void deleteMax(node *&root)
{
    if (root == NULL)
        return;

    if (!root->right)
    {
        node *leftChild = root->left;
        delete root;
        root = leftChild;
        return;
    }

    node *parent = NULL;
    node *current = root;
    while (current->right)
    {
        parent = current;
        current = current->right;
    }

    parent->right = current->left;
    delete current;
}

int main()
{
    node *root = input_tree();
    int Q;
    cin >> Q;

    while (Q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int value;
            cin >> value;
            insert(root, value);
        }
        else if (type == 2)
        {
            int maxVal = findMax(root);
            cout << maxVal << endl;
            deleteMax(root);
        }
    }

    return 0;
}
