/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 15/09/2023
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
    vi(v)(n);
    f(i, n) cin >> v[i];
    int one, two, an;
    f(i, n)
    {
        if (v[i] == 1)
            one = i + 1;
        if (v[i] == 2)
            two = i + 1;
        if (v[i] == n)
            an = i + 1;
    }
    if ((an <= two && an >= one) || (an <= one && an >= two))
        cout << one << " " << one << endl;
    else if (an >= one && an >= two)
        cout << max(one, two) << " " << an << endl;
    else
        cout << min(one, two) << " " << an << endl;
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