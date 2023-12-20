/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 11/12/2023
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

/* DRIVER FUNCTION */
void solve()
{
    ll n, k;
    cin >> n >> k;

    vi x(k);
    f(i, 0, k - 1) cin >> x[i];

    sort(all(x));

    vi pref(k);
    pref[k - 1] = n - x.back();
    fr(i, k - 2, 0)
    {
        pref[i] = pref[i + 1] + n - x[i];
    }

    ll l = 0, r = k - 2, mid, ans = k - 1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (pref[mid + 1] + 1 <= x[mid])
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << k - ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}       