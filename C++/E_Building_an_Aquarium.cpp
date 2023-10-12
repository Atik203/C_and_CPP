#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 1, r = INT_MAX;
        int ans = INT_MAX;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            long long result = 0;
            for (int i : a)
            {
                if (mid > i)
                {
                    result += (mid - i);
                }
            }

            if (result <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
