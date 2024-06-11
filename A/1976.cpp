/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 30-05-2024 20:48:55
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
    ll n;
    cin >> n;
    string a;
    f(i, 0, n - 1) cin >> a[i];
    ll fl = 0;
    int i;
    for (i = 0; i <= n - 2; i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i + 1] >= 'a' && a[i + 1] <= 'z'))
            break;

        if (a[i] > a[i + 1])
        {
            fl = 1;
            break;
        }
    }

    if (fl == 1)
        cout << "NO" << endl;

    else if (i == n - 2)
        cout << "YES" << endl;

    else
    {
        int j = i;
        for (j = i; j <= n - 2; j++)
        {
            if ((a[i] >= 0 && a[i] <= 9) || ((a[i + 1] >= 0 && a[i + 1] <= 9)) || a[i] > a[i + 1])
            {
                fl = 1;
                break;
            }
        }
        if (fl)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}