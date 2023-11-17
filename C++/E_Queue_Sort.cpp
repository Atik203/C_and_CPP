#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int idx = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < arr[idx])
            {
                idx = i;
            }
        }

        int res = idx;
        for (int i = idx; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                res = -1;
                break;
            }
        }

        cout << res << endl;
    }

    return 0;
}
