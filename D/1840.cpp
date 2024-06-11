/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 08-06-2024 17:53:52
* Coded by: Shubham Kandpal
*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
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
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    /**
     * strategy is to binary searchg on answer (X)
     *
     * is X possibl;e ?
     *
     * calculate the prefix upto a[0] + 2 * X
     *
     * and suffix upto a.back() - 2 * X
     *
     * if remaining are in reange 2 * X, answer is valid
     *
     * Why 2 * X?
     *
     * => for a subsegment, 'ans' will be at exactly mid of it
     * => so, if x is the difference on one side, x will be on the other => 2*X
     *
     * (x and X mean the same)
     */

    ll l = 0, r = 1e9, mid;

    sort(all(a));

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        int i = 0;
        while (i < n && a[i] - a[0] <= 2 * mid)
            i++;

        int j = n - 1;
        while (j > 0 && a.back() - a[j] <= 2 * mid)
            j--;

        if (j < i || a[j] - a[i] <= 2 * mid)
            r = mid - 1;
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

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}