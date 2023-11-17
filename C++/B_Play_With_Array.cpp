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
        int a[n];
        int b[n];
        int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                a1++;
            else
                a2++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
                b1++;
            else
                b2++;
        }
        int ans = abs(a1 - b1);
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                d++;
        }
        if (ans == d)
            cout << ans << endl;
        else
            cout << ans + 1 << endl;
    }
    return 0;
}