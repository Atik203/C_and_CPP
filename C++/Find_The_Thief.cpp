#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> count;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int code;
            cin >> code;
            count[code]++;
        }
        int t_code = 0;
        for (auto it : count)
        {
            if (it.second % 2 == 1)
            {
                t_code = it.first;
                break;
            }
        }
        cout << t_code << endl;
    }

    return 0;
}