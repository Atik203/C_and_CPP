#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        // For odd numbers, (n, n-1) is a valid pair
        cout << n << " " << (n - 1) << endl;
    }
    return 0;
}
