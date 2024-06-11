/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 04-06-2024 14:45:57
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
    ll n;
    cin >> n;
    vi a(n), b(n);

    ll min1 = INT_MAX, min2 = INT_MAX, max1 = INT_MIN, max2 = INT_MIN;
    f(i, 0, n - 1) cin >> a[i], min1 = min(min1, a[i]), max1 = max(max1, a[i]);
    f(i, 0, n - 1) cin >> b[i], min2 = min(min2, b[i]), max2 = max(max2, b[i]);

    ll mnmin1 = INT_MAX, mnmin2 = INT_MAX, mxmin1 = INT_MAX, mxmin2 = INT_MAX;
    ll mnmax1 = INT_MIN, mnmax2 = INT_MIN, mxmax1 = INT_MIN, mxmax2 = INT_MIN;

    f(i, 0, n - 1)
    {
        if (a[i] == min1)
        {
            mxmin1 = max(mxmin1, b[i]), mnmin1 = min(mnmin1, b[i]);
        }
        if (a[i] == max1)
        {
            mxmax1 = max(mxmax1, b[i]), mnmax1 = max(mnmax1, b[i]);
        }
        if (b[i] == min2)
        {
            mxmin2 = max(mxmin2, b[i]), mnmin2 = min(mnmin2, b[i]);
        }
        if (b[i] == max2)
        {
            mxmax2 = max(mxmax2, b[i]), mnmax2 = max(mnmax2, b[i]);
        }
    }
    cout << mxmin1 << mxmin2 << mxmax1 << mxmax2 << endl;

    ll ans1 = max(abs(min1 - mxmin1), abs(min1 - mnmax1));
    ll ans2 = max(abs(max1 - mxmin1), abs(max1 - mnmax1));
    ll ans3 = max(abs(min2 - mxmin2), abs(min2 - mnmax2));
    ll ans4 = max(abs(max2 - mxmin2), abs(max2 - mnmax2));

    cout << max4(ans1, ans2, ans3, ans4) << endl;
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