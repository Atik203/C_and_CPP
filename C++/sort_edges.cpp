#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    vector<pair<int, int>> e;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        e.push_back({u, v});
    }

    sort(e.begin(), e.end());
    for (auto v : e)
    {
        cout << v.first << " " << v.second << endl;
    }

    return 0;
}