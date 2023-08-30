#include <iostream>
#include <vector>
using namespace std;

vector<int> calculate_barbie_scores(string s)
{
    int n = s.size();
    vector<int> barbie_score(n + 1, 0);
    vector<vector<int>> char_freq(n + 1, vector<int>(26, 0));

    for (int i = 1; i <= n; ++i)
    {
        int char_idx = s[i - 1] - 'a';
        char_freq[i] = char_freq[i - 1];
        char_freq[i][char_idx] += 1;

        int expected_char_pos = i - (n - i + 1) + 1;
        if (expected_char_pos >= 1)
        {
            int expected_char_idx = s[expected_char_pos - 1] - 'a';
            barbie_score[expected_char_pos] += char_freq[i][expected_char_idx];
        }
    }

    return vector<int>(barbie_score.begin() + 1, barbie_score.end());
}

int main()
{
    int k;
    cin >> k;

    cin.ignore(); // Clear newline from previous input

    for (int i = 0; i < k; ++i)
    {
        string s;
        getline(cin, s);
        vector<int> barbie_scores = calculate_barbie_scores(s);

        for (int score : barbie_scores)
        {
            cout << score << " ";
        }
        cout << endl;
    }

    return 0;
}
