/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 04/02/2024
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

vi cnt;
vvi g;

void dfs(ll v, ll p)
{
    if (g[v].size() == 1 && g[v][0] == p)
    {
        cnt[v] = 1;
    }
    else
    {
        for (auto u : g[v])
        {
            if (u != p)
            {
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}

/* DRIVER FUNCTION */
void solve()
{
    ll n;
    cin >> n;

    g.assign(n, vector<ll>(n, 0));

    f(i, 0, n - 1)
    {
        ll u, v;
        cin >> u >> v;

        --u, --v;
        g[u].pb(v);
        g[v].pb(u);
    }

    cnt.assign(n, 0);

    dfs(0, 1);

    ll q;
    cin >> q;
    f(i, 0, q - 1)
    {
        ll c, k;
        cin >> c >> k;
        --c, --k;

        cout << cnt[c] * cnt[k] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}