/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 13/09/2023
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
    ll n, x;
    cin >> n >> x;

    vector<int> a(n);
    ll ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for(int j = 0; j < n; j++) {
            if((x | a[j]) != x) break;
            ans |= a[j];
        }
    }
    if(ans == x) cout << "yes" << endl;
    else cout << "no" << endl;
    // set<int> idx;
    // ll num = x, i = 0;
    // if (x == 0)
    // {
    //     cout << "YES" << endl;
    //     return;
    // }
    // while (num >= 0)
    // {
    //     if (num == 0)
    //     {
    //         idx.insert(i);
    //         break;
    //     }
    //     if ((num & 1) == 0)
    //     {
    //         idx.insert(i);
    //     }
    //     i++;
    //     num >>= 1;
    // }
    // // for (auto i : idx)
    // //     cout << i << endl;
    // int v, val = 0;
    // vector<vector<int>> init(3, vector<int>(n));
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cin >> init[i][j];
    // }
    // int ans = 0, lasdfjlj;
    // for (int j = 0; j < 3; j++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         lasdfjlj = init[j][i];
    //         int k = 0;
    //         while (lasdfjlj > 0)
    //         {
    //             if (lasdfjlj & 1 == 1)
    //                 if (idx.find(k) != idx.end())
    //                     break;
    //             k++;
    //             lasdfjlj >>= 1;
    //         }
    //         if (lasdfjlj != 0)
    //             break;
    //         else
    //             ans |= init[j][i];
    //         if (ans == x)
    //         {
    //             cout << "YES" << endl;
    //             return;
    //         }
    //     }
    // }
    // cout << "NO" << endl;
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