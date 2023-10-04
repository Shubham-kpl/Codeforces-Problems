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
    ll m;
    cin >> m;
    map<int, int> last;
    for (int j = 0; j < m; j++)
    {
        int n;
        cin >> n;
        int val;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            last[val] = j;
        }
    }
    map<int, int> inv;
    for (auto i : last)
        inv[i.second] = i.first;
    int k = 0;
    vi(give);
    for (auto i : inv)
    {
        if (k++ != i.first)
        {
            cout << -1 << endl;
            return;
        }
        else
            give.push_back(i.second);
    }
    for (auto i : give)
        cout << i << " ";
    cout << endl;
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