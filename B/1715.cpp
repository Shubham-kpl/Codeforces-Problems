/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 05/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    // condition jb pacca answer nhi niklega
    // 1. agar sum(s) < b * k
    // 2. agar sum(s) > (b*k+ k - 1) + ((n-1)*(k-1))

    if (s < b * k)
        cout << -1 << endl;
    else
    {
        ll sum = 0;
        ll i = 0;
        while (s - sum > (b * k + k - 1))
        {
            cout << k - 1 << " ";
            sum += (k - 1);
            i++;
        }
        while (i < n - 1)
        {
            cout << 0 << " ";
            i++;
        }
        cout << s - sum << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}