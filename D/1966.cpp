/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 08-05-2024 06:24:12
* Coded by: Shubham Kandpal
*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
#define pb push_back
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
    int n, k;
    cin >> n >> k;

    int sum = 0, x = 1;
    vi pref;
    while (sum < n)
    {
        sum += x++;
        pref.push_back(sum);
    }

    int l = 0, r = pref.size() - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (pref[mid] >= k)
            r = mid - 1;
        else
        {
            ans = mid;
            l = mid + 1;
        }
    }

    // ans is the index uptill which we can print values

    vi v;
    int extra = k - pref[ans] - 1;
    for (int i = 1; i <= extra; i++)
        v.push_back(1);

    for (int i = 1; i <= ans + 1; i++)
        v.push_back(i);

    for (int i = k + 1; i <= n; i++)
        v.push_back(i);

    cout << v.size() << endl;
    for (auto i : v)
        cout << i << " ";
    cout << endl;
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