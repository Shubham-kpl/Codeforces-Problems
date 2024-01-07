#include <bits/stdc++.h>
using namespace std;

int calculate_penalty(const vector<int> &a)
{
    int n = a.size();
    vector<int> pref_min(n), suff_min(n);

    // Calculate prefix min
    int curr_min = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        curr_min = min(curr_min, a[i]);
        pref_min[i] = curr_min;
    }

    // Calculate suffix min
    curr_min = INT_MAX;
    for (int i = n - 1; i >= 0; --i)
    {
        curr_min = min(curr_min, a[i]);
        suff_min[i] = curr_min;
    }

    // Calculate penalty for each split and find the minimum
    int total_penalty = INT_MAX;
    for (int i = 0; i < n - 1; ++i)
    {
        int penalty = 0;
        if (pref_min[i] > a[i + 1])
        {
            penalty += 1;
        }
        if (suff_min[i + 1] > a[i])
        {
            penalty += 1;
        }

        total_penalty = min(total_penalty, penalty);
    }

    return total_penalty;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int result = calculate_penalty(a);
        cout << result << endl;
    }

    return 0;
}
