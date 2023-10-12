#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ans = 0;
        string s;
        cin >> s;
        vector<int> v;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {

                if (ans > 0)
                {

                    v.push_back(ans);
                    ans = 0;
                }
            }
            else
            {
                ans++;
            }
        }

        if (ans > 0)
        {
            v.push_back(ans);
        }

        sort(v.rbegin(), v.rend());

        ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans += v[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
