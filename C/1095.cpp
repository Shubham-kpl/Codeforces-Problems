
/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 22-05-2024 18:35:24
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
    ll n, k;
    cin >> n >> k;

    // count set bits
    ll setB = __builtin_popcount(n);

    // 1. if setbits are greater than k, then we cannot put together some powers of two (k) to create n
    // 2. if k (no. of bits to add) is greater than n itself, we can't do, as extreme case would be to use "n" 1's, so if k > n, not possible
    if (setB > k || k > n)
    {
        cout << "NO" << endl;
    }
    else
    {

        /**
         * Idea
         *
         * We need to break bigger powers to smaller in order to achieve n
         *
         * let's first initialize a map mp and a queue qu, with the set bits of n, so we can get which bits are set and which powers of 2 to use
         */

        ll i = 0;
        // create a queue
        queue<int> qu;

        // create a map
        map<int, int> mp;
        while (i <= 30)
        {
            if ((1 << i) & n)
            {
                qu.push(1 << i);
                mp[1 << i] = 1;
            }
            i++;
        }

        // this will be used to check how many extra bits needed
        ll cnt = mp.size();
        while (cnt < k)
        {
            // Each time the no. of bits will increase by at most 1
            ll val = qu.front();
            qu.pop();
            if (val > 1)
            {
                qu.push(val / 2);
                qu.push(val / 2);
                mp[val / 2] += 2;
                mp[val]--;
                cnt++;
            }
        }

        cout << "YES" << endl;
        for (auto i : mp)
        {
            f(j, 0, i.second - 1)
            {
                cout << i.first << endl;
            }
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout.precision(10);

    solve();
    return 0;
}