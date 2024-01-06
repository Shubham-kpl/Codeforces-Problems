/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 16/12/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define pf(val) cout << val << endl;
#define f(i, a, b) for (ll i = a; i <= b; ++i)
#define fr(i, a, b) for (ll i = a; i >= b; --i)
#define vi vector<ll>
#define minv(v) *min_element(all(v));

/* DRIVER FUNCTION */
void solve()
{

    ll n, k;
    cin >> n >> k;

    vi v(n);
    f(i, 0, n - 1) cin >> v[i];

    if (k >= 3)
    {
        cout << 0 << endl;
        return;
    }

    sort(all(v));
    if (k == 1)
    {
        ll ans = minv(v);
        f(i, 0, n - 2)
        {
            ans = min(ans, abs(v[i] - v[i + 1]));
        }
        cout << ans << endl;
        return;
    }

    if (k == 2)
    {
        ll ans = minv(v);

        // Step 1: Brute force on all the possible differences
        f(i, 1, n - 1)
        {
            f(j, 0, i - 1)
            {
                ll val = v[i] - v[j];

                // Step 2: check lower bound of val using set to get the minimum difference possible

                ll p = lower_bound(all(v), val) - v.begin();
                if (p < n)
                    ans = min(ans, v[p] - val);
                if (p > 0)
                {
                    ans = min(ans, val - v[p - 1]);
                }
            }
        }

        cout << ans << endl;
    }
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