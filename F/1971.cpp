/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 15-05-2024 12:12:40
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

int greatest(int i, int l, int r)
{
    // highest value of j in (i, j) such that condition is valid
    int val = r;
    int hi = -1;
    int mid;
    while (l <= r)
    {
        mid = l + r >> 1;
        ll first = pow(mid, 2);
        ll sec = pow(i, 2);
        if (first + sec >= pow(val, 2))
        {
            if (first + sec < pow(val + 1, 2))
            {
                hi = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return hi;
}

int smallest(int i, int l, int r)
{
    // lowest value of j in (i, j) such that condition is valid
    int val = r;
    int lo = -1;
    ll mid = l + r >> 1;
    while (l <= r)
    {
        ll first = pow(mid, 2);
        ll sec = pow(i, 2);
        if (first + sec >= pow(val, 2))
        {
            if (first + sec < pow(val + 1, 2))
            {
                lo = mid;
            }
            r = mid - 1;
        }
        else
            l = mid + 1;
        mid = l + r >> 1;
    }
    return lo;
}

void solve()
{

    // 1.
    // int val;
    // cin >> val;

    // ll ans = 0;
    // i iterates over all values of x
    // f(i, 0, val)
    // {
    //     int l = 0, r = val;

    //     int lo = smallest(i, l, val);
    //     int hi = greatest(i, l, val);

    //     if (lo != -1)
    //         ans += (hi - lo + 1) * 4;
    // }
    // cout << ans - 4 << endl;

    // answer 2

    // lets decrement y for each x
    ll r;
    cin >> r;
    ll y = r;
    ll ans = 0;
    f(x, 0, r)
    {
        // decrement y
        // y is the max value for which (x, y) is a good point
        while (x * x + y * y >= (r + 1) * (r + 1))
            y--;

        // miny is the min value for which (x, y) is a good point
        ll mny = y;
        while (mny > 0 && x * x + mny * mny >= r * r)
            mny--, ans++;
    }
    cout << ans * 4 << endl;
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