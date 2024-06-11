/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 05-06-2024 16:43:15
* Coded by: Shubham Kandpal
*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pf(val) cout << val << endl;
#define f(i, a, b) for (ll i = a; i <= b; ++i)
#define fr(i, a, b) for (ll i = a; i >= b; --i)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vp vector<pair<ll, ll>>
#define sv(v) sort(v.begin(), v.end())
#define svr(v) sort(v.rbegin(), v.rend())
#define rv(v) reverse(v.begin(), v.end())
#define sa(a) sort(a, a + n)
#define ra(a) reverse(a, a + n)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c));
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(all(a))
#define minv(a) *min_element(all(a))

#define M 1000001

/* CONSTANTS */
const ll mod = 1e9 + 7;

/* DRIVER FUNCTION */
void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    f(i, 0, n - 1) cin >> a[i];

    // idx to check if there exists any idx, where gcd[idx] > gcd[idx + 1]
    ll idx = -1;

    // to check if given gcd is non-decreasing or not
    auto check = [&](vi arr)
    {
        ll chk = true;
        ll g = __gcd(arr[0], arr[1]);

        f(i, 1, (int)arr.size() - 2)
        {
            ll curr = __gcd(arr[i], arr[i + 1]);
            if (g > curr)
            {
                idx = i;
                return false;
            }
            g = curr;
        }
        return true;
    };

    check(a);

    if (idx == -1)
    {
        cout << "YES" << "\n";
        return;
    }

    // we'll make ammends at "idx - 1", "idx" and "idx + 1"
    vi a0 = a, a1 = a, a2 = a;

    if (idx > 0)
    {
        a0.erase(a0.begin() + idx - 1);
    }
    a1.erase(a1.begin() + idx);
    if (idx < n - 1)
    {
        a2.erase(a2.begin() + idx + 1);
    }

    // for (auto i : a0)
    //     cout << i << " ";cout<<"\n";
    // for (auto i : a1)
    //     cout << i << " ";cout<<"\n";
    // for (auto i : a2)
    //     cout << i << " ";cout<<"\n";

    if (check(a0) || check(a1) || check(a2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}