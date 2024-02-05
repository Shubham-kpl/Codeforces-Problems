/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 20/10/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long

map<ll, ll> mp;

void solve()
{
    ll n;
    cin >> n;

    if (mp.find(n) != mp.end())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;

    for (ll i = 2; i <= 1e6; i++)
    {
        ll val = 1 + i + i * i;
        mp[val] = 1;
        ll z = i * i * i;
        while (val + z <= 1e6)
        {
            val += z;
            z *= i;
            mp[val] = 1;
        }
    }

    while (t--)
    {
        solve();
    }
    return 0;
}