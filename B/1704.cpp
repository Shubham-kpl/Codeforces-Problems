/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 15/09/2023
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
    ll n, x;
    cin >> n >> x;
    vi(v)(n);
    f(i, n) cin >> v[i];
    ll l = v[0] - x, r = v[0] + x, newl, newr, ans = 0;
    for (int i = 1; i < n; i++)
    {
        newl = max(l, v[i] - x);
        newr = min(r, v[i] + x);
        if (newl > newr)
        {
            ans++;
            l = v[i] - x;
            r = v[i] + x;
        }
        else {
            l = newl;
            r = newr;
        }
    }
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