#include <bits/stdc++.h>
using namespace std;

bool can_color_array(const vector<int> &arr)
{
    int total_sum = 0;
    for (int num : arr)
    {
        total_sum += num;
    }

    if (total_sum % 2 == 1)
    {
        return false;
    }
    else
        return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        if (can_color_array(v))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
