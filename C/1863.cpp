/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 09/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n + 1);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
        cin >> v[i], sum += v[i];
    v[n] = ((n * (n + 1)) / 2) - sum;
    ll num = k % (n + 1);
    for (ll i = n - num + 1; i < 2 * n - num + 1; i++)
    {
        cout << v[i % (n + 1)] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}