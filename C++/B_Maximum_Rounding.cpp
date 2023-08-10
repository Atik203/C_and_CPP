#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        reverse(s.begin(), s.end());
        s = s + '0';
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '5')
            {
                s[i + 1]++;
                for (int k = i; k >= j; k--)
                {
                    s[k] = '0';
                }
                j = i + 1;
            }
        }
        reverse(s.begin(), s.end());

        int a = 0;
        if (s[0] == '0')
        {
            for (int i = 1; i <= n; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i <= n; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
    }

    return 0;
}
