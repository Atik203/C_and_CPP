#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int count = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (s.find(x) != s.end())
            {
                count++;
            }
            else
            {
                s.insert(x);
            }
        }
        cout << count << endl;
    }

    return 0;
}