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
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // TLE
    // ll mini = INT_MAX, val = 0;
    // f(i, n)
    // {
    //     if (s[i] == 'B')
    //         val++;
    //     if (val == k)
    //     {
    //         cout << 0 << endl;
    //         return;
    //     }
    //     if (s[i] == 'W')
    //     {
    //         ll cnt = 0, val2 = val, j = i;
    //         while (j < n)
    //         {
    //             val2++;
    //             if (s[j] == 'W')
    //             {
    //                 cnt++;
    //             }
    //             j++;
    //             if (val2 == k)
    //             {
    //                 mini = min(mini, cnt);
    //                 break;
    //             }
    //         }
    //         if (val2 != k)
    //             break;
    //         /*else
    //         {
    //             while (i < n)
    //             {
    //                 if (s[i] == 'B')
    //                     break;
    //                 i++;
    //             }
    //             i--;
    //         }*/
    //         val = 0;
    //     }
    // }
    // cout << mini << endl;

    /////////////////////

    // Wow
    ll mini = INT_MAX;
    vector<int> prefix;
    ll j = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            cnt++;
        if (i - j == k - 1) {
            mini = min(mini, cnt);
            if(s[j] == 'W') cnt--;
            j++;
        }
    }
    cout << mini << endl;
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