/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 08-05-2024 07:38:41
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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);

    // b[i] = xor of vector 'a' until i
    vector<ll> b(n + 1);

    // this map stores the location of various xors
    map<ll, vector<ll>> mp;

    // let the xor-value "0" be present at mp[0], means initially before every other index, xor-value = 0
    mp[0].push_back(0);
    f(i, 1, n)
    {
        cin >> a[i];
        b[i] = b[i - 1] ^ a[i];
        mp[b[i]].push_back(i);
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        // check if it can be partitioned into two parts
        if (b[l - 1] == b[r])
        {
            cout << "YES" << endl;
            continue;
        }

        // else we will try to compute p and q
        int p, q;

        // for p, search in the xor-array of "b[r]", p is the first value which is >= l, having xor-value = b[r]
        p = *lower_bound(mp[b[r]].begin(), mp[b[r]].end(), l);

        // for q, q is the element which is nearest to r (q<r) (towards left side) and whose  xor-value = b[l-1],
        q = *--lower_bound(mp[b[l - 1]].begin(), mp[b[l - 1]].end(), r);

        cout << (q > p ? "YES" : "NO") << endl;
    }
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