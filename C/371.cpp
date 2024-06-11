/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 21-05-2024 10:45:01
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
    string s;
    cin >> s;
    ll nb, ns, nc, pb, ps, pc, r;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;

    /**
     * use binary searach,
     * ta   ke a value x and reduce sample space
     *
     * for each each we can  check if it is feasible
     */

    ll n1 = 0, n2 = 0, n3 = 0;
    for (auto i : s)
    {
        if (i == 'B')
            n1++;
        else if (i == 'S')
            n2++;
        else
            n3++;
    }

    ll x = 0, y = 1e13, m = x + (y - x) / 2, ans = -1;
    while (x <= y)
    {
        // required value
        ll req = (max(0LL, n1 * m - nb)) * pb + (max(0LL, n2 * m - ns)) * ps + (max(0LL, n3 * m - nc)) * pc;

        if (req > r)
        {
            y = m - 1;
        }
        else
        {
            ans = m;
            x = m + 1;
        }
        m = x + (y - x) / 2;
    }

    cout << ans << endl;
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