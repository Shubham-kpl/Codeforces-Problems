/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 30/09/2023
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
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())

void solve()
{
    ll n, m;
    cin >> n >> m;

    // if (n % m == 0)
    // {
    //     cout << 0 << endl;
    // }
    // else
    // {
    //     ll v1 = log2(m);
    //     double v2 = log2(m);
    //     n = n % m;
    //     if (v1 == v2)
    //     {
    //         ll num = n;
    //         ll cnt = 0;
    //         while ((num * 2) % m != 0)
    //         {
    //             if (num * 2 > m)
    //             {
    //                 cnt += (num);
    //                 num *= 2;
    //                 num -= m;
    //             }
    //             else
    //             {
    //                 cnt += num;
    //                 num *= 2;
    //             }
    //         }
    //         cout << cnt + num << endl;
    //     }
    //     else
    //     {
    //         ll v1 = log2(m / n);
    //         double v2 = log2(m / n);
    //         if (v1 == v2)
    //         {
    //             ll num = n;
    //             ll cnt = 0;
    //             while ((num * 2) % m != 0)
    //             {
    //                 if (num * 2 > m)
    //                 {
    //                     cnt += (num);
    //                     num *= 2;
    //                     num -= m;
    //                 }
    //                 else
    //                 {
    //                     cnt += num;
    //                     num *= 2;
    //                 }
    //             }
    //             cout << cnt + num << endl;
    //         }
    //         else
    //             cout << -1 << endl;
    //     }
    // }

    ///////////////////////////////

    // Method 2
    ll p = m;

    // Conditions:
    // 1. m should not be odd
    // 2. m should be even
    // 3. break when n % m == 0
    // 4. else divide m by 2
    while (m % 2 == 0)
    {
        if (n % m == 0)
            break;
        m /= 2;
    }

    // ye lines tb execute hongi jb m odd hoga
    if (n % m != 0)
    {
        cout << -1 << endl;
        return;
    }

    // else in all cases answer exist karega
    ll cnt = 0;
    n = n % p;
    while ((n * 2) % p != 0)
    {
        if (n * 2 > p)
        {
            cnt += (n);
            n *= 2;
            n -= p;
        }
        else
        {
            cnt += n;
            n *= 2;
        }
    }
    cout << cnt + n << endl;
    // ll cnt = 0;
    // while (n != 0)
    // {
    //     while (n < p)
    //     {
    //         cnt += n;
    //         n *= 2;
    //     }
    //     n = n % p;
    // }
    // cout << cnt << endl;
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