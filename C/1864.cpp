/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 09/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi(v) vector<int> v
void solve()
{
    ll x;
    cin >> x;
    vi(v);
    v.pb(x);
    int p;
    for (int i = 0;; ++i)
    {
        if ((x >> i) & 1)
        {
            if ((1 << i) == x)
            {
                break;
            }
            x -= (1 << i);
            v.pb(x);
        }
    }
    while (x > 1)
    {
        x >>= 1;
        v.pb(x);
    }
    cout << (int)(v).size() << endl;
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}