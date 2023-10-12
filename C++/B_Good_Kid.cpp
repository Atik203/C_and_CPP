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
        for (int i = 0; i < n; i++)

        {
            cin >> a[i];
        }

        int idx = 0;
        int mn = a[idx];
        for (int i = 0; i < n; i++)
        {
            if (mn > a[i])
            {
                mn = a[i];
                idx = i;
            }
        }

        a[idx] = a[idx] + 1;
        long long product = 1;
        for (int i = 0; i < n; i++)
        {
            product *= a[i];
        }
        cout << product << endl;
    }

    return 0;
}