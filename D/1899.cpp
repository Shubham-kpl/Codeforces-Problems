/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 17/11/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
#define pb push_back
#define f0(i, n) for (ll i = 0; i < n; i++)
#define vi vector<ll>

const ll m = 1e9+1;

/* COMINATORICS */
ll fact(ll n)
{
    if (n == 0|| n == 1)
        return 1;
    return ((n * (fact(n - 1) % m)) % m);
}

ll cmb(ll n, ll r)
{
    return ((fact(n) / ((fact(r) * fact(n - r)))) % m);
}


/* DRIVER FUNCTION */
void solve()
{

    ll n;
    cin >> n;

    vi a(n);
    map<ll, ll> mp;
    f0(i, n)
    {
        cin >> a[i];
        ll val = a[i];
        if (val == 2)
            mp[1]++;
        else
            mp[val]++;
    }

    ll ans = 0;
    for (auto i : mp)
    {
        if (i.second > 1)
        {
            ans = (ans + (i.second * (i.second - 1)) / 2);
        }
    }
    cout << ans << endl;
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