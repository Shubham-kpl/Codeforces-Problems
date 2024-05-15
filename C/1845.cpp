/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 05-05-2024 22:23:41
* Coded by: Shubham Kandpal
*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pf(val) cout << val << endl;
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fr(i, a, b) for (ll i = a; i >= b; --i)
#define vi vector<int>
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

int check(int idx, int val, string s)
{
    int i = idx;
    while (i < s.size())
    {
        if (s[i] == val)
            return i;
        i++;
    }
    return INT_MAX;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    int m;
    cin >> m;
    string l, r;
    cin >> l >> r;

    // check for each value in between l[i] to r[i], which value's first occurence occurs in the most right, that will be our choice

    int mx = 0;
    int idx = 0;
    f(i, 0, m - 1)
    {
        f(val, l[i], r[i])
        {
            int ans = check(idx, val, s);
            if (ans == INT_MAX)
            {
                cout << "YES" << endl;
                return;
            }
            mx = max(mx, ans);
        }
        idx = mx + 1;
    }

    cout << "NO" << endl;
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