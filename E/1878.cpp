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
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())

// int bitsPos[30][200000];

bool check(ll mid, ll left, ll k, vector<vector<int>>&bitsPos)
{
    // We need to find the bitwise AND of [left, mid]

    ll andd = 0;

    for(int bit = 0; bit < 30; bit++) {
        // check if this bit is present in all from [left, mid] or not
        if(bitsPos[bit][left] && bitsPos[bit][mid]) {
            if(bitsPos[bit][mid] - bitsPos[bit][left] == mid - left)
                andd ^= (1 << bit);
        }
    }

    return andd >= k;
}

void solve()
{
    ll n;
    cin >> n;
    vi(a)(n);
    f(i, n) cin >> a[i];

    vector<vector<int>> bitsPos(30, vector<int>(n));
    vector<int>filledSoFar(30);

    // filling bitsPos
    f(i, n)
    {
        for (int bits = 0; bits < 30; bits++)
        {
            if (a[i] & (1 << bits))
                bitsPos[bits][i] = ++filledSoFar[bits];
        }
    }

    ll q;
    cin >> q;

    f(i, q)
    {
        ll left, k;
        cin >> left >> k;
        left--;

        // We'll now learn a new way of finding bitwise "and"

        // we need to find the maximum r such that AND(l, r) >= k
        // for that we'll find the minimum t such that AND(l, t) < k and then r = t - 1
        // to find 't', we'll use binary search, since AND is non increasing in nature

        ll ans = -2;
        ll l = left, r = n - 1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, left, k, bitsPos))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans + 1 << " ";
    }
    cout << endl;
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