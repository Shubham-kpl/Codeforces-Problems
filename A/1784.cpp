/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 12/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n;
    cin >> n;
    vi(v)(n + 1);
    v[0] = 0;
    for (ll i = 1; i <= n; i++)
        cin >> v[i];

    sv(v);
    ll cost = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] - v[i - 1] > 1)
        {
            cost += v[i] - v[i - 1] - 1;
            v[i] = v[i - 1] + 1;
        }
    }
    cout << cost << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}