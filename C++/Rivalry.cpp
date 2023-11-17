#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a += c;
    b += d;

    if (a > b)
    {
        cout << "Dominater";
    }
    else
        cout << "Everule";

    return 0;
}