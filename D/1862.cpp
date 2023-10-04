/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 04/10/2023
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

    ll l = 1, r = min<ll>(2e9, 2 * n), mid = l + (r - l) / 2, ans;
    while (l <= r)
    {
        if ((mid * (mid - 1)) / 2 <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
        mid = l + (r - l) / 2;
    }
    ll rem = n - ((ans * (ans - 1)) / 2);
    cout << ans + rem << endl;
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