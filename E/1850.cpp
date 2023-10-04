/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 13/09/2023
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
    ll n, c;
    cin >> n >> c;
    vi(v)(n);
    for (auto &i : v)
        cin >> i;

    // Sample space reduction method to find the solution (binary search)
    ll l = 1, r = 1e9, mid = l + (r - l) / 2, w = -1;

    while (l <= r)
    {
        ll sum = 0;
        for (auto i : v)
        {
            sum += pow((i + 2 * mid), 2);
            if (sum > c)
                break;
        }
        if (sum > c)
        {
            r = mid - 1;
        }
        else if (sum == c)
        {
            w = mid;
            break;
        }
        else
            l = mid + 1;
        mid = l + (r - l) / 2;
    }
    cout << w << endl;
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