#include <bits/stdc++.h>
using namespace std;

int search(vector<int> v, int l, int r, int k)
{
    if (l > r)
    {
        return 0;
    }

    int mid = (l + r) / 2;
    if (v[mid] == k)
    {
        return 1 + search(v, l, mid - 1, k) + search(v, mid + 1, r, k);
    }
    else if (k > v[mid])
    {
        return search(v, mid + 1, r, k);
    }
    else
    {
        return search(v, l, mid - 1, k);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    int count = search(v, 0, n - 1, k);
    if (count > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
