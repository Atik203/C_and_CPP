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
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(a[i], mn);
        }

        long long int sum = accumulate(a, a + n, 0);
        if (sum % 2 == 0)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
    return 0;
}