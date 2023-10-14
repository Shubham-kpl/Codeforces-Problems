/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 14/10/2023
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
#define svr(v) sort(v.begin(), v.end(), greater<ll>())
#define sa(a) sort(a, a + n)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c));
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

const ll mod = 1e9 + 7;

void solve()
{
    long double n, b, h;
    cin >> n >> b >> h;
    vi(y)(n + 1);
    f(i, n) cin >> y[i];
    y[n] = y[n - 1] + h;
    long double ans = 0;
    f(i, n)
    {
        long double diff = y[i + 1] - y[i];
        if (diff < h)
        {
            long double d2 = (long double)b * (h - diff) / h;
            ans += (b + d2) / 2.0 * diff;
        }
        else
            ans += (long double)b * h / 2.0;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.precision(10);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}