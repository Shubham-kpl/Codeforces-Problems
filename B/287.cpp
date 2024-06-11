/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 21-05-2024 17:06:53
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
    ll n, k;
    cin >> n >> k;

    // k^2-k+2
    if ((pow(k, 2) - k + 2) < n)
    {
        cout << -1 << endl;
        return;
    }

    ll x = 2, y = k, mid;
    while (x <= y)
    {
        mid = x + (y - x) / 2;

        ll sum = ((k - mid + 1) * (mid + k)) / 2 - (k - mid);
        if (sum > n)
        {
            x = mid + 1;
        }
        else
        {
            y = mid - 1;
        }
    }

    if (x == k + 1) // if n == 1
    {
        cout << 0 << endl;
        return;
    }

    ll val = (k - x + 1) * (x + k) / 2 - (k - x);
    if (val == n)
    {
        cout << k - x + 1 << endl;
    }
    else
        cout << k - x + 2 << endl;
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