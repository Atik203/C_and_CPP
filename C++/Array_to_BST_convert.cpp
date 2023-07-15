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

node *convert(int a[], int n, int l, int r)
{
    if (l > r)
    {
        return NULL;
    }
    int mid = (l + r) / 2;
    node *root = new node(a[mid]);
    node *leftRoot = convert(a, n, l, mid - 1);
    node *rightRoot = convert(a, n, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;
}
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
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // have to be sorted array
    sort(a, a + n);
    node *root = convert(a, n, 0, n - 1);
    level_order(root);

    return 0;
}