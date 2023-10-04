/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 15/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define pb push_back
#define f(i, n) for (int i = 0; i < n; i++)
#define vi(v) vector<int> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    int n;
    cin >> n;
    int a, b;
    map<int, vector<int>> mp;
    f(i, n)
    {
        cin >> a >> b;
        mp[a].pb(b);
    }

    for (auto i : mp)
    {
        sort(i.second.begin(), i.second.end());
        for (auto j : i.second)
            cout << i.first << " --> " << j << " ";
        cout << endl;
    }

    int k = 0, ans = 0, v = 0, t = 0;
    for (auto i : mp)
    {
        int val = i.first;
        int size = i.second.size(), f = 0;
        while (i.first > k)
        {
            if (size > 0)
            {
                size--;
                ans += i.second[size];
            }
            else
            {
                break;
            }
            k++;
            if (k == t && f == 0)
                k -= v, f = 1;
        }
        if (val <= k)
        {
            k = 0;
        }
        else
            v = i.second.size() - size, t = i.first;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}