/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 29/01/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi vector<ll>
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n, k;
    cin >> n >> k;
    vi a(n);
    f(i, n) cin >> a[i];
    sv(a);
    vi p(n + 1);
    for (ll i = 1; i <= n; i++)
        p[i] = p[i - 1] + a[i - 1];

    ll res = 0;
    for (ll x = 0; x <= k; x++)
    {
        ll y = k - x;
        res = max(res, p[n - y] - p[2 * x]);
    }
    cout<<res<<endl;
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