/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 26-05-2024 11:13:38
* Coded by: Shubham Kandpal
*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pf(val) cout << val << endl;
#define f(i, a, b) for (ll i = a; i <= b; ++i)
#define fr(i, a, b) for (ll i = a; i >= b; --i)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vp vector<pair<ll, ll>>
#define sv(v) sort(v.begin(), v.end())
#define svr(v) sort(v.rbegin(), v.rend())
#define rv(v) reverse(v.begin(), v.end())
#define sa(a) sort(a, a + n)
#define ra(a) reverse(a, a + n)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c));
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(all(a))
#define minv(a) *min_element(all(a))

#define M 1000001

/* CONSTANTS */
const ll mod = 1e9 + 7;

/* DRIVER FUNCTION */
ll check(ll t, ll k, vi a)
{
    ll extra = 0, cnt = 0;
    for (auto i : a)
    {
        if (i >= t)
            extra += (i > t);
        else
            k -= (t - i), cnt++;
        if (k < 0)
            return 0;
    }
    return (t - 1) * a.size() + 1 + extra + (min(cnt, k));
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vi a(n);
    f(i, 0, n - 1) cin >> a[i];
    sort(all(a));
    ll l = 1, r = a[0] + k, m;
    ll res = 0;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        ll ans = check(m, k, a);
        if (ans)
        {
            res = ans,
            l = m + 1;
        }
        else
            r = m - 1;
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}