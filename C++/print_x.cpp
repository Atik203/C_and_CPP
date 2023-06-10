#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int spaces = 0;
    int mid = n / 2;

    for (int i = 0; i < mid; i++) 
    {
        for (int i = 0; i < spaces; i++) 
        {
            cout <<" ";
        }
        cout << "\\";
        for (int i = 0; i < n- 2*spaces-2; i++) 
        {
            cout <<" ";
        }
        cout << "/" << endl;
        spaces++;
    }

    for (int i = 0; i < spaces; i++) 
    {
        cout <<" ";
    }
    cout << "X" << endl;
    spaces--;

    for (int i = 0; i<mid; i++) 
    {
        for (int i = 0; i < spaces; i++) 
        {
            cout << " ";
        }
        cout << "/";
        for (int i = 0; i < n - 2 * spaces - 2; i++) 
        {
            cout << " ";
        }
        cout << "\\" << endl;
        spaces--;
    }

    return 0;
}
