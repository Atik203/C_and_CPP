#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    string s1;

    while(ss >> word)
    {
        reverse(word.begin(), word.end());
        s1 += word;
        s1 += " ";
    }

    s1.pop_back();

    cout << s1;
}