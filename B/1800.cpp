/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 11/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<int, int> l, u;
    string lower = "abcdefghijklmnopqrstuvwxyz";
    for (auto i : s)
    {
        if (lower.find(i) == string::npos)
            u[i - 'A']++;
        else
            l[i - 'a']++;
    }
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        ll val = min(u[i], l[i]);
        ans += val;
        u[i] -= val, l[i] -= val;
        if (k > 0)
        {
            val = min(k, abs(u[i] - l[i]) / 2);
            ans += val;
            k -= val;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}