#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        multiset<int> s;
        int n;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            int a;
            cin >> a;
            s.insert(a);
        }

        bool odd = true;
        for (int i = 1; i <= n; i++)
        {
            auto it = s.lower_bound(1); // Find the first odd element in the set
            if (it == s.end())
            {
                odd = false;
                break;
            }
            int oddElement = *it;
            s.erase(it); // Remove the odd element from the set

            it = s.lower_bound(oddElement + 1); // Find an even element greater than oddElement
            if (it == s.end())
            {
                odd = false;
                break;
            }
            int evenElement = *it;
            s.erase(it); // Remove the even element from the set

            // Check if the sum of the two elements is odd
            if ((oddElement + evenElement) % 2 != 1)
            {
                odd = false;
                break;
            }
        }

        if (odd)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
