#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int i = 0;
        long long int ans = 0;
        while (i < n)
        {
            int j = i + 1;
            while (j < n)
            {
                if (a[j] - a[j - 1] > k)
                {
                    break;
                }
                j++;
            }
            long long int tt = j - i;
            ans = max(ans, tt);
            i = j;
        }
        cout << n - ans << endl;
    }

    return 0;
}