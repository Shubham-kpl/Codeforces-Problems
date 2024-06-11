#include <bits/stdc++.h>

using namespace std;

#define long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }
    int l = -1, r = m - 1;
    while (l < r - 1)
    {
        int mid = (l + r) / 2;
        int prev = 0;
        bool bad = false;
        for (int i = 0; i < n; i++)
        {
            int lf = a[i], rf = a[i] + mid;
            if ((lf <= prev && prev <= rf) || (lf <= prev + m && prev + m <= rf))
            {
                continue;
            }
            if (lf < prev)
            {
                bad = true;
                break;
            }
            else
            {
                prev = lf;
            }
        }
        if (bad)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << r << '\n';
}