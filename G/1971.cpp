/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 15-05-2024 08:16:17
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
    int n;
    cin >> n;
    vi a(n);
    f(i, 0, n - 1) cin >> a[i];

    // brute force
    // f(i, 0, n - 1)
    // {
    //     long long val = 1e9 + 1, idx = -1;
    //     f(j, i + 1, n - 1)
    //     {
    //         if (a[j] < a[i] && (a[j] ^ a[i]) < 4)
    //         {
    //             if (val > a[j])
    //             {
    //                 val = a[j];
    //                 idx = j;
    //             }
    //         }
    //     }
    //     if (idx != -1)
    //         swap(a[i], a[idx]);
    // }

    // optimized 1

    // group based on value after second bit

    // 1. use priority queue
    // cp is a vector that stores a priority queue corresponding to each group

    // priority queue is increasing
    // map<int, priority_queue<int, vi, greater<int>>> cp;
    // f(i, 0, n - 1)
    // {
    //     cp[a[i] >> 2].push(a[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << cp[a[i] >> 2].top() << endl;
    //     cp[a[i] >> 2].pop();
    // }
    // cout << endl;

    // 2. use vectors and explicitly sort them
    map<int, vi> cp;
    f(i, 0, n - 1)
    {
        cp[a[i] >> 2].push_back(a[i]);
    }

    for (auto &i : cp)
    {
        sort(i.second.rbegin(), i.second.rend());
    }

    for (int i = 0; i < n; i++)
    {
        cout << cp[a[i] >> 2].back() << " ";
        cp[a[i] >> 2].pop_back();
    }
    cout << endl;
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