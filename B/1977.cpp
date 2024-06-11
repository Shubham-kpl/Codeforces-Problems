/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 26-05-2024 20:10:14
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

void chk(ll &x, vi &a)
{
    if (x == 1)
        a.push_back(x < 0 ? -1 : 1);
    else if (x == 2)
        a.push_back(x < 0 ? -1 : 1),
            a.push_back(0);
    else if (x == 3)
        a.push_back(x < 0 ? -1 : 1), a.push_back(0), a.push_back(1);
    else if (x == 4)
        a.push_back(x < 0 ? -1 : 1), a.push_back(0), a.push_back(0);
    else if (x == 5)
        a.push_back(x < 0 ? -1 : 1), a.push_back(0), a.push_back(x < 0 ? -1 : 1);
    else
    {
    }
}

void solve()
{
    ll x;
    cin >> x;

    if (x == 1)
        cout << 1 << endl;
    else if (x == 2)
        cout << "0 1" << endl;
    else if (x == 3)
        cout << "-1 0 1" << endl;
    else if (x == 4)
        cout << "0 0 1" << endl;
    else if (x == 5)
        cout << "1 0 1" << endl;
    else
    {
        vi ans;
        while (x != 0)
            chk(x, ans);
        reverse(all(ans));
        for (auto i : ans)
            cout << i << " ";
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