/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 04/10/2023
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
    ll n, k;
    cin >> n >> k;
    vi(a)(n);
    vi(h)(n);
    f(i, n) cin >> a[i];
    f(i, n) cin >> h[i];

    ll total = a[0], i = 0, maxi;
    if (a[0] > k)
        maxi = 0, i = 1;
    else
        maxi = 1;
    for (ll j = 1; j < n; j++)
    {
        total += a[j];
        while (total > k && i <= j)
        {
            total -= a[i];
            i++;
        }

        if ((h[j - 1] % h[j]) == 0)
        {

            else if (total > k)
            {
                while (total > k && i < n)
                {
                    total -= a[i];
                    i++;
                }
                maxi = max(maxi, 1LL);
            }
            else
            {
                maxi = max(maxi, j - i + 1);
            }
        }
        else
        {
            maxi = max(maxi, j - i);
            i = j;
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