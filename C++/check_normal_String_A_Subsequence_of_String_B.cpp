#include <bits/stdc++.h>
using namespace std;
int main()
{
    // normal approach (n+m)
    string a, b;
    cin >> a >> b;
    int x = 0;
    bool ans = false;
    for (char c : b)
    {
        if (c == a[x])
        {
            x++;
        }
        if (x == a.size())
        {
            ans = true;
            break;
        }
    }

    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}