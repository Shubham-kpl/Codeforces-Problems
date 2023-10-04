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
    ll n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    ll maxi = INT_MIN;
    set<ll> st;
    f(i, n)
    {
        if (s[i] == 'g')
            st.insert(i), st.insert(i + n);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            auto val = st.lower_bound(i);
            maxi = max(maxi, (*val) - i);
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