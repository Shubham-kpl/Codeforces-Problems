/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 07/10/2023
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

    // ans will store the no. of fibonacci like sequences
    ll ans = 0;

    // since the last element is set, this approach deals with setting the second last, third last and so on till the first element.
    // we'll set the second last element using the for loop below. The value of second last element can be anywhere from 1 to n

    for (ll i = 1; i <= n; i++)
    {

        // first indicates the last element (here n) and second indicates the second last element (which varies each time the loop runs)
        ll first = n, second = i;

        // "valid" is used to check if the final selection is valid or not
        bool valid = true;

        // this loop will iterate till the 1st index, checking the validity at each position (simple brute force!!)
        for (ll i = 1; i <= k - 2; i++)
        {

            // updating first and second elements
            ll fx = second;
            second = first - fx;
            first = fx;

            // check if the current element set is correct
            valid &= (second <= first && (min(first, second) >= 0));
            if (!valid)
                break;
        }
        if (valid)
            ans++;
    }
    cout << ans << endl;
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