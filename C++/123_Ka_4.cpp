#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == 1)
            {
                cout << j;
            }
            else if (j == 1)
            {
                cout << i;
            }
            else if ((i == N || j == N))
            {
                cout << N;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
