/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 22-05-2024 10:15:46
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
    vi a(n);
    f(i, 0, n - 1) cin >> a[i];

    /***
     * we can have 2 ^n possibilities (equal to no. of subsequences)
     *
     * lets use bit masks
     *
     * we have to check for each of the subseq whether to add it or subtract
     *
     * we can do so by checking whether its bit is 1 or 0
     *
     * if 1 => add
     * 0 => subtract
     *
     * How to check
     *
     * for j = 1 to 2 ^ n -1
     *
     * for each i = 1 to n - 1
     *
     * do
     *  if (1 << i) & j == 1 // 1 << i represents its position
     *      do add
     *  else
     *      do subtract
     */

    f(i, 0, (1 << n) - 1)
    {
        ll ans = 0;
        f(j, 0, n - 1)
        {
            if (i & (1 << j))
            {
                ans += a[j];
            }
            else
                ans -= a[j];
        }
        if (ans % 360 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    solve();
    return 0;
}