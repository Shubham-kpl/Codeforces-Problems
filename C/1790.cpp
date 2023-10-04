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
    vector<vector<int>> val(n, vector<int>(n - 1));
    int x;
    map<int, int> mp;
    f(i, n)
    {
        f(j, n - 1)
        {
            cin >> val[i][j];
            if (j == 0)
            {
                mp[val[i][0]]++;
                if (mp[val[i][0]] == 2)
                    x = val[i][0];
            }
        }
    }
    cout << x << " ";
    f(i, n)
    {
        if (val[i][0] != x)
        {
            for (int j = 0; j < n - 1; j++)
                cout << val[i][j] << " ";
            cout << endl;
            return;
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