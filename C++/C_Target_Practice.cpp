#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n = 10;
        char a[11][11];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }

        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == 'X')
                {
                    sum += min(min(i - 1, n - i), min(j - 1, n - j)) + 1;
                }
            }
        }

        cout << sum << endl;
    }
    return 0;
}
