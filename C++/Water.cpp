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
        vector<int> h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int l = 0;
        int r = n - 1;
        int left = l;
        int right = r;

        int mx_h = 0;
        while (l < r)
        {
            int mn_h = min(h[l], h[r]);

            if (mn_h > mx_h)
            {
                mx_h = mn_h;
                left = l;
                right = r;
            }

            if (h[l] < h[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        cout << left << " " << right << endl;
    }

    return 0;
}
