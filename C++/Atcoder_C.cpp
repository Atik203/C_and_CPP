#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    long long int mx = 0;
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long int s = v[i].second;
            long long int t = v[j].second;

            if (v[i].first == v[j].first)
            {
                mx = max(mx, s + t / 2);
            }
            else
            {
                mx = max(mx, s + t);
                break;
            }
        }
    }

    cout << mx << endl;
    return 0;
}
