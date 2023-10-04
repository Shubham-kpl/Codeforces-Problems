/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 11/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (int i = 0; i < n; i++)
#define vi(v) vector<int> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll m, n;
    cin >> m >> n;
    vector<int> a(m * n);
    f(i, m * n) cin >> a[i];
    sort(a.begin(), a.end());
    ll val1 = (m - 1) * (a[n * m - 1] - a[1]) + (n - 1) * (a[n * m - 1] - a[0]) + (m - 1) * (n - 1) * (a[n * m - 1] - a[0]);
    ll val2 = (m - 1) * (a[n * m - 1] - a[0]) + (n - 1) * (a[n * m - 1] - a[1]) + (m - 1) * (n - 1) * (a[n * m - 1] - a[0]);
    ll val3 = (m - 1) * (a[n * m - 1] - a[0]) + (n - 1) * (a[n * m - 2] - a[0]) + (m - 1) * (n - 1) * (a[n * m - 1] - a[0]);
    ll val4 = (m - 1) * (a[n * m - 2] - a[0]) + (n - 1) * (a[n * m - 1] - a[0]) + (m - 1) * (n - 1) * (a[n * m - 1] - a[0]);
    cout << max(max(max(val1, val2), val3), val4) << endl;
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