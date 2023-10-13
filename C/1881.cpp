/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 12/10/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi(v) vector<ll> v
#define vvi(v) vector<vector<ll>> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())

void solve()
{
    ll n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    f(i, n)
    {
        f(j, n) cin >> v[i][j];
    }
    ll cnt = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll k = 0;
        for (ll j = i; j < n - i - 1; j++)
        {
            ll a = v[i][j], b = v[i + k++][n - i - 1], c = v[n - j - 1][i], d = v[n - i - 1][n - j - 1];
            ll maxi = max(max(max(a, b), c), d);
            cnt += (4 * maxi - (a + b + c + d));
        }
    }
    cout << cnt << endl;
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