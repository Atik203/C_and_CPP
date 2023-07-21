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
        vector<pair<int, int>> responses;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            responses.push_back(make_pair(a, b));
        }

        int max_quality = 0;
        int winner_idx = -1;

        for (int i = 0; i < n; i++)
        {
            if (responses[i].first <= 10)
            {
                if (max_quality < responses[i].second)
                {
                    max_quality = responses[i].second;
                    winner_idx = i;
                }
            }
        }

        cout << (winner_idx + 1) << endl;
    }

    return 0;
}
