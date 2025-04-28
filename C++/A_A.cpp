#include <bits/stdc++.h>
using namespace std;

// problem link: https://vjudge.net/contest/694802#problem/A
// find the occurrence of the substring 'hznu' in the string s

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.substr(i, 4) == "hznu")
        {
            count++;
        }
    }
    cout << count << endl;
}