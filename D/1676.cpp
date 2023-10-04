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
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi vector<ll>
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    f(i, n)
    {
        f(j, m)
        {
            cin >> v[i][j];
        }
    }
    ll maxi = INT_MIN, sum = 0;
    f(i, n)
    {
        f(j, m)
        {
            ll p = i, q = j;
            while (p >= 0 && p < n && q >= 0 && q < m)
            {
                sum += v[p][q];
                p++, q++;
            }
            p = i, q = j;
            while (p >= 0 && p < n && q >= 0 && q < m)
            {
                sum += v[p][q];
                p++, q--;
            }
            p = i, q = j;
            while (p >= 0 && p < n && q >= 0 && q < m)
            {
                sum += v[p][q];
                p--, q++;
            }
            p = i, q = j;
            while (p >= 0 && p < n && q >= 0 && q < m)
            {
                sum += v[p][q];
                p--, q--;
            }
            sum -= (3 * v[i][j]);
            maxi = max(sum, maxi);
            sum = 0;
        }
    }
    cout << maxi << endl;
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