/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 13/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n, m;
    cin >> n >> m;
    // vi(a)(n);
    // vi(b)(m);
    // f(i, n) cin >> a[i];
    // f(i, m) cin >> b[i];
    // sv(a);
    // ll sum = 0;
    // if (a[0] >= b[m - 1])
    // {
    //     sum += b[m - 1];
    //     for (int i = 1; i < n; i++)
    //         sum += a[i];
    //     cout << sum << endl;
    //     return;
    // }
    // int val = 0;
    // for (int i = 0; i < min(m, n); i++)
    // {
    //     if (a[i] > b[i])
    //     {
    //         sum -= b[val];
    //         sum += b[i];
    //         val = i;
    //     }
    //     else
    //     {
    //         sum += b[i];
    //     }
    // }
    // if (m > n)
    // {
    //     sum -= b[val];
    //     sum += b[m - 1];
    // }
    // else if (n > m)
    // {
    //     for (int i = m; i < n; i++)
    //         sum += a[i];
    // }
    // cout << sum << endl;

    vi(v)(n + m);
    f(i, n + m) cin >> v[i];
    ll ans = v[n + m - 1];
    v[n + m - 1] = 0;
    sv(v);
    reverse(v.begin(), v.end());
    f(i, n - 1) ans += v[i];
    cout << ans << endl;
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