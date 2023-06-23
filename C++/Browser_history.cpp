#include <bits/stdc++.h>
using namespace std;

int main() 
{
    list<string> s;
    string v;

    while (true) 
    {
        cin >> v;
        if (v == "end") break;
        else 
        {
            s.push_back(v);
        }
    }

    auto cur = s.begin();
    int q;
    cin >> q;

    while (q--) 
    {
        string com;
        cin >> com;
        if (com == "visit") 
        {
            string add;
            cin >> add;
            auto it = s.begin();
            while (it != s.end()) 
            {
                if (*it == add) 
                {
                    cur = it;
                    cout << *it << endl;
                    break;
                }
                it++;
            }
            if (it == s.end()) 
            {
                cout << "Not Available" << endl;
            }
        } 
        else if (com == "next")
        {
            if (cur == s.end()) 
            {
                cout << "Not Available" << endl;
            } 
            else 
            {
                cur++;
                if (cur == s.end()) 
                {
                    cout << "Not Available" << endl;
                    cur--;
                } 
                else 
                {
                    cout << *cur << endl;
                }
            }
        } 
        else if (com == "prev") 
        {
            if (cur == s.begin())
             {
                cout << "Not Available" << endl;
            } 
            else 
            {
                cur--;
                cout << *cur << endl;
            }
        }
    }

    return 0;
}
