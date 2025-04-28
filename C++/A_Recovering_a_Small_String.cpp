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
        string s = "";
        if (n <= 27)
        {
            s = 'a';
            s += 'a';
            n -= 3;
            s += ('a' + n);
            cout << s << endl;
        }
        else if (n >= 28 && n <= 53)
        {
            s = 'a';
            n -= 28;
            s += ('a' + n);
            s += 'z';
            cout << s << endl;
        }
        else
        {
            n -= 53;
            s += ('a' + n);
            s += 'z';
            s += 'z';
            cout << s << endl;
        }
    }
    return 0;
}
