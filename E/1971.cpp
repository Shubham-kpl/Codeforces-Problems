/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 15-05-2024 11:00:35
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
    long long n, k, q;
    cin >> n >> k >> q;

    vector<double> dist(k + 1);
    vector<double> time(k + 1);

    f(i, 1, k) cin >> dist[i];
    f(i, 1, k) cin >> time[i];

    while (q--)
    {
        int x;
        cin >> x;

        int l = 0, r = k, mid;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            // finding the region where the input lies
            if (x < dist[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        // r contains that index where the x lies

        long long res = time[r];
        double rem = x - dist[r];
        // cout << rem << endl;
        if (rem > 0)
            res += (rem * (time[r + 1] - time[r]) / (dist[r + 1] - dist[r]));

        cout << res << " ";
    }

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