/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 08-06-2024 11:34:02
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
bool check(vi a, ll k, ll orrr)
{
    // kya possible hai bhi
    ll or2 = 0;
    vi bits(31);
    f(i, 0, k - 1)
    {
        ll x = a[i];
        or2 |= x;
        ll idx = 0;
        while (x > 0)
        {
            if (x & 1)
                bits[idx]++;
            idx++;
            x /= 2;
        }
    }

    // or hi baraabar nhi nikla
    if (or2 != orrr)
    {
        return 0;
    }

    // remove 1st element, add kth element, and check if or is attainable or not
    f(i, 0, a.size() - k - 1)
    {
        ll x = a[i];
        ll idx = 0;
        while (x > 0)
        {
            if (x & 1)
            {
                bits[idx]--;
                // if (bits[idx] == 0)
                //     or2 -= (1 << idx);
            }
            idx++;
            x /= 2;
        }
        idx = 0;
        x = a[i + k];
        while (x > 0)
        {
            if (x & 1)
            {
                bits[idx]++;
                // if (bits[idx] == 1)
                //     or2 += (1 << idx);
            }
            idx++;
            x /= 2;
        }

        if (or2 != orrr)
            return 0;
    }
    return 1;
}
void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    f(i, 0, n - 1) cin >> a[i];

    vi orr(n);
    int orrr = 0;
    f(i, 0, n - 1) orrr |= a[i], orr[i] = orrr;

    ll l = 1, r = n, mid, ans = n;

    while (l < r)
    {

        // mid is "k", loneliness
        mid = l + r >> 1;

        if (check(a, mid, orrr))
        {
            r = mid;
            ans = mid;
        }
        else
            l = mid + 1;
    }

    cout << l << endl;
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