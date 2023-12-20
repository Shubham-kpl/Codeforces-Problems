/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 24/09/2023
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
#define mv(a) *max_element(a.begin(), a.end());
#define ma(a, n) *max_element(a, a + n);

void solve()
{
    ll n, s, k;
    cin >> n >> s >> k;
    vi(a)(k);
    f(i, k) cin >> a[i];
    sv(a);
    ll l = 0, r = k - 1, mid = l + (r - l) / 2, ans = -1;
    while (l <= r)
    {
        if (a[mid] == s)
        {
            ans = 1;
            break;
        }
        else if (a[mid] < s)
            l = mid + 1;
        else
            r = mid - 1;
        mid = l + (r - l) / 2;
    }
    if (ans == -1)
    {
        cout << 0 << endl;
        return;
    }
    set<ll> st;
    f(i, k) st.insert(a[i]);
    ll x = s;
    while (x >= 1)
    {
        if (st.find(x) == st.end())
        {
            break;
        }
        x--;
    }
    ll y = s;
    while (y <= n)
    {
        if (st.find(y) == st.end())
        {
            break;
        }
        y++;
    }
    if(x == 0) cout << y - s << endl;
    else if(y == n + 1) cout << s - x << endl;
    else cout << min(y - s, s - x) << endl;
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