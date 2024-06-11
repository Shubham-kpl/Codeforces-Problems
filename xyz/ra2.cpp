/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 17-05-2024 10:26:42
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
const ll mod = 1e8;

/* DRIVER FUNCTION */
void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    vi p(n + 1);
    ll sum = 0;
    f(i, 1, n)
    {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
        sum += a[i];
    }

    ll e = n;
    vi mp(n + 1);
    f(i, 1, n)
    {
        while (a[i] + a[e] >= mod)
            e--;
        mp[i] = e + 1;
    }

    ll ans = 0;
    f(i, 1, n)
    {
        // value whose mod exists
        // i.e values ahead of mp[i]
        if (i < mp[i])
        {
            if (mp[i] == n + 1)
            {
                ans += sum + n * (n - 1) * a[i] / 2;
            }
        }
        if (i > mp[i])
        {
        }
        else
        {
        }
        // value whose mod DOES NOT exists
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    // ll t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}