/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 04-06-2024 11:15:52
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

    // all - wo saare jo b mei hai
    // diff - 'b' ke wo jo 'a' se alag hai
    // avail - 'd' ke elements
    map<ll, ll> all, diff, avail;

    vi a(n), b(n);
    f(i, 0, n - 1) cin >> a[i];
    f(i, 0, n - 1)
    {
        cin >> b[i];
        all[b[i]]++;
        if (a[i] != b[i])
            diff[b[i]]++;
    };

    ll m;
    cin >> m;
    vi d(m);
    f(i, 0, m - 1) cin >> d[i], avail[d[i]]++;

    ll cnt = 0;
    bool chk = false;
    for (auto i : b)
    {
        // kya d ka aakhari wala b mei available hai
        if (i == d[m - 1])
        {
            chk = true;
        }

        // kya d ka ye element b mei hai bhi!!
        if (all[i] == 0)
        {
            cnt++;
        }

        // agar jarurat hai to
        else if (diff[i] > 0)
        {

            // kahi esa to nhi jitne chahiye utne hai hi nhi
            if (avail[i] < diff[i])
            {
                chk = false;
                break;
            }

            // agar mil gya to wo ab tk ke "cnt" (Extra walo) ko khapaa dega
            else
            {
                cnt = 0;
                diff[i]--;
                avail[i]--;
            }
        }
    }
    if (cnt || !chk)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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