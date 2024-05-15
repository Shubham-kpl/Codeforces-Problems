/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 08-05-2024 06:47:04
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

    ll n, k, bob, sas;
    cin >> n >> k >> bob >> sas;

    vector<ll> p(n + 1), a(n + 1);

    f(i, 1, n)
    {
        cin >> p[i];
    }
    f(i, 1, n) cin >> a[i];

    // this function calculates maximum score
    auto score = [&](ll idx, ll k)
    {
        // create a set to check if index is already parsed
        vector<bool> check(n + 1, false);

        // create a ans variable to keep maximum sum
        ll ans = 0;
        ll final_ans = 0;
        ll cnt = 1;

        // run until cnt is less than k and "i" is not yet traversed
        while (cnt <= k && check[idx] == false)
        {
            check[idx] = true;

            ans += a[idx];

            // for each index, increment the value of ans, if it is optimal to chose all the remaining values as the a[index]
            ll temp = ans + (k - cnt) * a[idx];

            // change idx to p[idx] for next iteration
            idx = p[idx];
            final_ans = max(final_ans, temp);
            cnt++;
        }
        return final_ans;
    };

    ll bobS = score(bob, k);
    ll sasS = score(sas, k);

    // cout << bobS << " " << sasS << endl;

    if (bobS > sasS)
        cout << "Bodya" << endl;
    else if (sasS > bobS)
        cout << "Sasha" << endl;
    else
        cout << "Draw" << endl;
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