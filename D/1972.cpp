/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 17-05-2024 09:19:18
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
const ll mod = 20;

vi spf(mod + 1);
vvi factors(mod);

void calcSpf()
{
    f(i, 1, mod)
    {
        if (i % 2 == 0)
            spf[i] = 2;
        else
            spf[i] = 1;
    }

    // cout << spf[6] << " ";

    f(i, 3, mod)
    {
        if (spf[i] != 1)
            continue;

        for (int j = i; j <= mod; j += i)
        {
            if (spf[j] == 1)
                spf[j] = i;
        }
    }
}

void calc()
{
    cout << "called";
    f(i, 1, mod)
    {
        factors[i].pb(spf[i]);

        ll k = i / spf[i];

        ll j = spf[i];

        while (k > 1)
        {
            cout << j << " ";
            // not already visited
            if (spf[k] != j)
                factors[i].pb(j);
            k /= spf[k];
        }
    }
}

/* DRIVER FUNCTION */
void solve()
{
    int n, m;
    cin >> n >> m;

    m = min(n, m);

    // calcSpf();
    calc();

    // f(i, 1, mod)
    // {
    //     // cout << spf[i] << " ";
    //     for (auto j : factors[i])
    //         cout << j << " ";
    // }
    cout << endl;

    // ll ans = 0;
    // f(a, 1, n)
    // {
    //     f(b, 1, m)
    //     {
    //         if ((a + b) % (b * b) == 0)
    //         {
    //             ans++;
    //         }
    //     }
    // }
    // pf(ans);
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