/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 14/09/2023
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
    // ll n;
    // cin >> n;
    // vi(v)(n);
    // f(i, n) cin >> v[i];
    // ll cnt = 0;
    // f(i, n)
    // {
    //     int val = v[i];
    //     ll j = i + 1;
    //     while (j < n && v[j] == val)
    //     {
    //         j++;
    //     }
    //     if (i == 0 && j == n)
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     else
    //     {
    //         if (j == n)
    //         {
    //             if (val < v[i - 1])
    //                 cnt++;
    //         }
    //         else if (i == 0)
    //         {
    //             if (v[j] > v[j - 1])
    //                 cnt++;
    //         }
    //         else
    //         {
    //             if (val < v[i - 1] && v[j] > v[j - 1])
    //                 cnt++;
    //         }
    //     }
    //     if (cnt > 1)
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    //     i = j - 1;
    // }
    // cout << "YES" << endl;

    ll n;
    cin >> n;
    int x;
    vi(a);
    f(i, n) {
        cin >> x;
        if(i == 0 || a.back() != x) {
            a.pb(x);
        }
    }
    ll cnt = 0;
    f(i, a.size()) {
        if((i == 0 || a[i] < a[i - 1]) && (i == a.size() - 1 || a[i] < a[i + 1])) 
            cnt++;
    }
    if(cnt == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
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