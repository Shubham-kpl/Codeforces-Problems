/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 22-05-2024 23:52:12
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
    ll n, m;
    cin >> n >> m;

    vvi a(n, vi(m));
    set<ll> st;
    f(i, 0, n - 1)
    {
        f(j, 0, m - 1)
        {
            cin >> a[i][j];
            st.insert(a[i][j]);
        }
    }

    ll xxor = 0;
    f(i, 0, n - 1) xxor ^= a[i][0];

    // agar sabke pehle element se hi kaam chal jaae
    if (xxor > 0)
    {
        cout << "TAK" << endl;
        f(i, 0, n - 1) cout << "1 ";
    }
    else
    {
        ll idx = -1;
        f(i, 0, n - 1)
        {
            f(j, 0, m - 1)
            {
                if (a[i][j] != a[i][0])
                {
                    cout << "TAK" << endl;
                    f(k, 0, n - 1)
                    {
                        if (i == k)
                            cout << j + 1 << " ";
                        else
                            cout << 1 << " ";
                    }
                    return;
                }
            }
        }
        cout << "NIE" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    solve();
    return 0;
}