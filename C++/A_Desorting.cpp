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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != a[i])
            {
                cout << "0" << endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            int mn = INT_MAX;
            int index;
            for (int i = 0; i < n - 1; i++)
            {
                if ((a[i + 1] - a[i]) < mn)
                {
                    mn = a[i + 1] - a[i];
                    index = i;
                }
            }
            int ans;
            ans = (a[index + 1] - a[index]) / 2 + 1;
            cout << ans << endl;
        }
    }

    return 0;
}