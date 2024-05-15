/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 08-05-2024 05:53:06
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
    vi a(n);
    f(i, 0, n - 1) cin >> a[i];

    k--;

    int idx = -1;

    // finding first stronger cow that my-cow
    f(i, 0, n - 1)
    {
        if (a[i] >= a[k])
        {
            idx = i;
            break;
        }
    }

    // ans 1
    swap(a[k], a[0]);
    int cnt = 0;
    f(i, 1, n - 1)
    {
        if (a[i] < a[0])
            cnt++;
        else
            break;
    }

    swap(a[0], a[k]);

    // ans 2
    swap(a[idx], a[k]);

    int ans = 0;

    if (idx > 0)
        ans = 1;

    int j = idx + 1;
    while (j < n)
    {
        if (a[j] > a[idx])
            break;
        ans++;
        j++;
    }

    cout << max(cnt, ans) << endl;
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