#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M;
    cin >> M;

    int total_days = 0;
    int D[101];
    for (int i = 0; i < M; ++i)
    {
        cin >> D[i];
        total_days += D[i];
    }

    int middle_day = (total_days + 1) / 2;
    int month = 0;
    int day = 0;

    for (int i = 0; i < M; ++i)
    {
        if (middle_day <= D[i])
        {
            month = i + 1;
            day = middle_day;
            break;
        }
        middle_day -= D[i];
    }

    cout << month << " " << day << endl;

    return 0;
}
