/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 16/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 1; i <= n; i++)
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n == 1)
    {
        if (k == 1)
        {
            cout << "YES" << endl;
            cout << 1 << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        if (k == 1)
        {
            cout << "YES" << endl;
            for (ll i = 1; i <= n; i++)
            {
                cout << i << endl;
            }
            return;
        }
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        ll fact = 1, inc = 2, no = 1;
        f(i, n)
        {
            if (i % 2 == 0)
            {
                f(j, k)
                {
                    cout << 2 * fact++ << " ";
                }
            }
            else
            {
                f(j, k)
                {
                    cout << no << " ";
                    no += inc;
                }
            }
            cout << endl;
        }
    }
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