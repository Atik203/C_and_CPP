#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        cin.ignore();
        s.push_back(x);
    }

    reverse(s.begin(), s.end());

    for (string v : s)
    {
        cout << v << endl;
    }

    return 0;
}
