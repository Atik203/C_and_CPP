#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        if (N % 2 == 0)
        {
            cout << "Bob\n";
        }
        else
        {

            if (N == 1)
            {
                cout << "Bob\n";
            }
            else
            {
                cout << "Alice\n";
            }
        }
    }

    return 0;
}
