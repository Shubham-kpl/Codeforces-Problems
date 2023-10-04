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
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n;
    cin >> n;
    vi(v)(n);
    f(i, n) cin >> v[i];

    // this cnt will maintain the no. of boxes used
    ll cnt = 0;

    // vacant will be used to maintain the no. of vacant boxes
    ll vacant = 0;

    // one will denote the no. of ones till now, so that we can check the maximum boxes that can be used
    ll one = 0;
    f(i, n)
    {
        if (v[i] == 1)
        {
            one++;
            if (vacant == 0)
                cnt++;
            else
                vacant--;
        }
        if (v[i] == 2)
        {
            if (cnt != 0)
                vacant = cnt - (one / 2 + 1); // one / 2 + 1 is the maximum no. of boxes that can be used by n pets
            while (i < n && v[i] == 2)        // skip the continuous 2s
                i++;
            i--;
        }
    }
    cout << cnt << endl;
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