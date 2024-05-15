/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 06-05-2024 23:26:22
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

int count(vector<string> a, vector<vector<int>> &dp, int i, int j)
{
    // if not equal to *

    if (!(i >= 0 && i <= a.size() - 1 && j >= 0 && j <= a[0].size() - 1))
        return 0;

    if (a[i][j] != '*')
        return dp[i][j] = 0;

    // if already known
    if (dp[i][j] != -1)
        return dp[i][j];

    // else
    return dp[i][j] = 1 + min3(count(a, dp, i + 1, j - 1), count(a, dp, i + 1, j), count(a, dp, i + 1, j + 1));
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    f(i, 0, n - 1) cin >> v[i];

    vector<vector<int>> dp(n, vector<int>(m, -1));

    int ans = 0;
    f(i, 0, n - 1)
    {
        f(j, 0, m - 1)
        {
            ans += count(v, dp, i, j);
        }
    }
    cout << ans << endl;
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