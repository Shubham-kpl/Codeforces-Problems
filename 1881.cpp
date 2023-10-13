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
    // 1.
    // ll a, b, c;
    // cin >> a >> b >> c;
    // if (a == b && b == c)
    //     cout << "YES" << endl;
    // else if (a == b || b == c || c == a)
    // {
    //     if ((a == b && (c == 2 * b || c == 3 * b || c == 4 * b || b == 2 * c)) || (c == b && (a == 2 * b || a == 3 * b || a == 4 * b || c == 2 * a)) || (a == c && (b == 2 * a || b == 3 * a || b == 4 * a || a == 2 * b)))
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //         cout << "NO" << endl;
    // }
    // else
    // {
    //     if (a < b && a < c)
    //     {
    //         ll maxi = max(b, c), mini = min(b, c);
    //         if (maxi == 3 * a && mini == 2 * a)
    //             cout << "YES" << endl;
    //         else
    //             cout << "NO" << endl;
    //     }
    //     else if (b < a && b < c)
    //     {
    //         ll maxi = max(a, c), mini = min(a, c);
    //         if (maxi == 3 * b && mini == 2 * b)
    //             cout << "YES" << endl;
    //         else
    //             cout << "NO" << endl;
    //     }
    //     else
    //     {
    //         ll maxi = max(a, b), mini = min(b, a);
    //         if (maxi == 3 * c && mini == 2 * c)
    //             cout << "YES" << endl;
    //         else
    //             cout << "NO" << endl;
    //     }
    // }

    // 2.
    ll a, b, c;
    cin >> a >> b >> c;

    // total value
    ll total = a + b + c;

    // creating a vector of values to later check for a condition
    vi(v) = {a, b, c};

    // cuts 0, 1, 2, 3...
    for (int cuts = 0; cuts <= 3; cuts++)
    {
        // check if the value after cut is an integer
        if (total % (cuts + 3))
            continue;

        // value of a cut
        ll div = total / (cuts + 3);

        // check whether you can make all elements as div
        bool poss = true;
        for (auto x : v)
        {
            // if x is not divisible in div, answer is false
            if (x % div)
                poss = false;
        }
        if (poss)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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