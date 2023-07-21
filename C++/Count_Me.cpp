#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> mp;

        int Count = 0;
        string maxWord = "";

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > Count)
            {
                Count = mp[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << Count << endl;
    }

    return 0;
}
