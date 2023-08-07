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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "0" << endl;
            continue;
        }
        int a = -1;
        for (int i = n - 1; i >= 0; i--)
        {

            if (v[i] >= v[i - 1])
            {
                continue;
            }
            else
            {
                a = i;
                break;
            }
        }
        int result = *max_element(v.begin(), v.begin() + a);
        cout << result << endl;
    }

    return 0;
}