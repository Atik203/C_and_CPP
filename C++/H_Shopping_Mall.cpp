#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n), a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int m;
    cin >> m;

    vector<vector<int>> t(4);
    set<int> minP;

    for (int i = 0; i < n; i++)
    {
        t[a[i]].push_back(p[i]);
        t[b[i]].push_back(p[i]);
    }

    for (int i = 1; i <= 3; i++)
    {
        sort(t[i].begin(), t[i].end());
        if (!t[i].empty())
        {
            minP.insert(t[i][0]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int c;
        cin >> c;

        auto it = minP.lower_bound(t[c][0]);
        if (it != minP.end() && *it == t[c][0])
        {
            cout << *it << " ";
        }
        else
        {
            cout << -1 << " ";
        }
    }

    cout << endl;

    return 0;
}
