/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 12/10/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi(v) vector<ll> v
#define vvi(v) vector<vector<ll>> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())

void solve()
{
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    ll flag = 0;
    while ((x.size() < m))
    {
        x += x;
        flag++;
    }
    for (ll i = 0; i <= x.size() - m; i++)
    {
        string str = "";
        ll cnt = 0, j = i;
        while (cnt < m)
        {
            str += x[j++];
            cnt++;
        }
        if (str == s)
        {
            cout << 0 + flag << endl;
            return;
        }
    }
    x += x;
    for (ll i = 0; i <= x.size() - m; i++)
    {
        string str = "";
        ll cnt = 0, j = i;
        while (cnt < m)
        {
            str += x[j++];
            cnt++;
        }
        if (str == s)
        {
            cout << 1 + flag << endl;
            return;
        }
    }
    cout << -1 << endl;
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