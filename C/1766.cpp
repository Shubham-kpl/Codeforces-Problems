/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 06-05-2024 01:04:07
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

void solve()
{
    int n;
    cin >> n;
    vector<string> v(2);
    f(i, 0, 1) cin >> v[i];

    // pos stores the first column where exactly one column is black
    int pos = -1;
    f(j, 0, n - 1)
    {
        if (v[0][j] != v[1][j])
        {
            pos = j;
            // break;
        }
    }

    // if pos = -1, answer is "YES"
    if (pos == -1)
    {
        cout << "YES" << endl;
        return;
    }

    // else check for the left and right part from pos
    bool ok = true;

    int idx = v[0][pos] == 'B' ? 0 : 1;

    // right part first
    f(i, pos + 1, n - 1)
    {
        if (v[idx][i] == 'W')
            ok = false;
        if (v[idx ^ 1][i] = 'B')
            idx ^= 1;
    }

    // left part next
    idx = v[0][pos] == 'B' ? 0 : 1;

    fr(i, pos - 1, 0)
    {
        if (v[idx][i] == 'W')
            ok = false;
        if (v[idx ^ 1][i] = 'B')
            idx ^= 1;
    }

    cout << (ok ? "YES" : "NO") << endl;
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