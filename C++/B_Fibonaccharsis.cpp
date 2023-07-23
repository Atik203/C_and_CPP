#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<array<int, 2>> fibonacci_pairs(901);

void precompute_fibonacci()
{
    array<int, 2> prev_pair = {1, 0}, current_pair = {0, 1};
    fibonacci_pairs[1] = prev_pair;
    fibonacci_pairs[2] = current_pair;
    for (int i = 3; i < 901; ++i)
    {
        prev_pair = fibonacci_pairs[i - 2];
        current_pair = fibonacci_pairs[i - 1];
        array<int, 2> new_pair;
        new_pair[0] = prev_pair[0] + current_pair[0];
        new_pair[1] = prev_pair[1] + current_pair[1];
        fibonacci_pairs[i] = new_pair;
        prev_pair = current_pair;
        current_pair = new_pair;
    }
}

int count_fibonacci_like_sequences(int target_sum, int sequence_length)
{
    if (sequence_length >= 901)
        return 0;

    array<int, 2> pair_sum = fibonacci_pairs[sequence_length];
    int result = 0;
    for (int i = 0; i <= target_sum; ++i)
    {
        int remaining_sum = (target_sum - pair_sum[0] * i);
        if (remaining_sum % pair_sum[1] == 0)
        {
            if (remaining_sum / pair_sum[1] >= i)
            {
                ++result;
            }
        }
    }
    return result;
}

int32_t main()
{
    int t;
    cin >> t;

    precompute_fibonacci();

    while (t--)
    {
        int target_sum, sequence_length;
        cin >> target_sum >> sequence_length;

        int result = count_fibonacci_like_sequences(target_sum, sequence_length);

        cout << result << endl;
    }
}
