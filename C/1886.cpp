/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 15/10/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define sv(v) sort(v.begin(), v.end())
#define svr(v) sort(v.begin(), v.end(), greater<ll>())
#define sa(a) sort(a, a + n)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c));
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())

ll fact(ll val)
{
    if (val == 0 || val == 1)
        return 1;
    return val * fact(val - 1);
}

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

const ll mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    ll pos;
    cin >> pos;
    --pos;
    ll curLen = s.size();

    // this will tell if the no. of elements have reached pos or not
    bool ok = pos < curLen;

    s += '1';

    vector<char> st;
    for (auto c : s)
    {
        while (!ok && st.size() > 0 && st.back() > c)
        {
            pos -= curLen;
            --curLen;
            st.pop_back();

            if (pos < curLen)
                ok = true;
        }
        st.pb(c);
    }
    cout << st[pos];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}