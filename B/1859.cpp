/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 28/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll first_smallest_element = INT_MAX, second_smallest_element = INT_MAX, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vector<ll> m(x);
        for (ll j = 0; j < x; j++)
        {
            cin >> m[j];
        }

        sort(m.begin(), m.end());
        first_smallest_element = min(m[0], first_smallest_element);
        second_smallest_element = min(m[1], second_smallest_element);
        sum += m[1];
    }
    cout << first_smallest_element + sum - second_smallest_element << endl;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}