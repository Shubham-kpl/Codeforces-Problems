/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 10-05-2024 21:37:16
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
    string s;
    cin >> s;
    int n = s.size();

    // 1.
    // ll ans = 0;
    // f(i, 0, n - 1)
    // {
    //     if (s[i] == '1')
    //     {
    //         while (i < n && s[i] == '1')
    //             i++;
    //     }
    //     else
    //     {
    //         while (i < n && s[i] == '0')
    //         {
    //             i++;
    //         }
    //     }
    //     ans++;
    //     i--;
    // }
    // if (ans == 2 && s[n - 1] == '1')
    //     cout << 1 << endl;
    // else
    //     cout << (ans > 2 ? ans - 1 : ans) << endl;

    // 2.
    // check just i and i + 1

    // pr check if "01" is present
    ll ans = 1, pr = false;
    f(i, 0, n - 2)
    {
        ans += (s[i] != s[i + 1]);
        pr |= (s[i] == '0' && s[i + 1] == '1');
    }
    cout << ans - pr << endl;
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