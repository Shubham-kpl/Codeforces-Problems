/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 25-07-2024 10:27:32
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
    ll n, m;
    cin >> n >> m;
    vi a(n);
    set<ll> st;
    f(i, 0, n - 1) cin >> a[i], st.insert(a[i]);

    map<ll, ll> mp;
    f(i, 0, n - 1) mp[a[i]]++;

    ll mx = INT_MIN;
    for (auto i : mp)
    {
        ll rem = m - i.first;
        if (rem < 0)
            break;
        ll tmp = i.first;
        if (st.find(i.first + 1) != st.end())
        {
            ll val = (min(mp[i.first + 1], rem / (i.first + 1))) * ((i.first + 1));
            tmp += val;
            rem -= val;
        }
        if (rem >= i.first)
        {
            ll val = (min(mp[i.first] - 1, rem / (i.first))) * ((i.first));
            tmp += val;
            rem -= val;
        }
        mx = max(mx, tmp);
    }
    cout << mx << endl;
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