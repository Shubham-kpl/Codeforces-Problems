/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 07-05-2024 17:39:52
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
map<int, vector<int>> adj;
vector<int> visited(100001);
vector<int> dp(100001);
vector<vector<int>> g;
vector<int> cnt;

void dfs(int u, int v)
{
    if (adj[v][0] = u && adj[v].size() == 1)
    {
        cnt.push_back(v);
    }

    else
    {
        for (auto i : adj[v])
        {
            if (i != u)
            {
                dfs(v, i);
            }
        }
        cnt.push_back(v);
    }
}

int bfs(int v)
{
    // if visited, return 0
    if (visited[v] == 1)
        return 0;

    // else
    visited[v] = 1;
    int cnt = 1;
    for (auto i : adj[v])
    {
        cnt += bfs(i);
    }
    return dp[v] = cnt;
}

void solve()
{
    int n;
    cin >> n;
    f(i, 0, n - 2)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // bfs(1);
    dfs(1, -1);

    for (auto i : cnt)
        cout << i << " " << endl;

    int q;
    cin >> q;
    f(i, 0, q - 1)
    {
        int x, y;
        cin >> x >> y;
    }

    f(i, 1, n) cout << dp[i] << " ";
    cout << endl;
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