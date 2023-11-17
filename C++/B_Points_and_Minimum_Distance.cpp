#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n);
        vector<pair<int, int>> p;

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            p.push_back({v[i], v[2 * n - 1 - i]});
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans += abs(p[i - 1].first - p[i].first);
            ans += abs(p[i - 1].second - p[i].second);
        }
        cout << ans << endl;
        for (auto a : p)
        {
            cout << a.first << " " << a.second << endl;
        }
    }
    return 0;
}