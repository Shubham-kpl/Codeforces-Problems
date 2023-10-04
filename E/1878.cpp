/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 01/10/2023
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

ll pref[31][pow]

bool check (ll l, ll mid) {

}

void solve()
{
    ll n;
    cin >> n;
    vi(a)(n);
    vi(bits)(32);
    ll pref[31][n];
    f(i, n)
    {
        cin >> a[i];
        ll val = a[i], j = 0;
        while (val > 0)
        {
            bits[j++] = (val & 1);
            val <<= 1;
        }
        pref[i] = bits;
    }

    ll q;
    cin >> q;
    ll left, k;
    f(i, q)
    {
        cin >> left >> k;
        left--;
        if (k > a[left])
        {
            cout << -1 << " ";
        }
        else
        {
            ll l = left, r = n - 1, ans = -2;
            while (l <= r)
            {
                ll mid = (l + r) / 2;
                if (check(mid))
                {
                    ans = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }

            cout << ans + 1 << endl;
        }
    }
    cout << endl;
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