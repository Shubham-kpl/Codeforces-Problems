/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 08/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll maxE = INT_MIN, maxO = INT_MIN, ansE = 0, ansO = 0, flag = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i % 2 == 0)
        {
            if (v[i] > 0)
            {
                ansE += v[i];
                flag = 1;
            }
            else
                maxE = max(maxE, v[i]);
        }
        else
        {
            if (v[i] > 0)
            {
                ansO += v[i];
                flag = 1;
            }
            else
                maxO = max(maxO, v[i]);
        }
    }
    if (flag != 1)
        cout << max(maxO, maxE) << endl;
    else
        cout << max(ansE, ansO) << endl;
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