#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s.erase(remove_if(s.begin(), s.end(), [](char c)
                      { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }),
            s.end());

    cout << s << endl;
    return 0;
}