#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                ans++;
                for (int j = i; j < i + k; j++)
                {
                    if (j < n)
                    {

                        s[j] = 'W';
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
