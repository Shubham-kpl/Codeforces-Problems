/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 17-05-2024 11:04:42
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

    vector<pair<ll, ll>> p;
    f(i, 0, n - 1) p.push_back({a[i], i});

    vi pr;

    sort(all(p));
    ll sum = 0;

    // calculating prefix sum
    for (auto i : p)
    {
        pr.push_back(i.first + sum);
        sum += i.first;
    }

    // answer vector
    vi ans(n);

    // back will store the max index which can be erased
    ll back = 0;

    f(i, 0, n - 1)
    {

        // score is initially set to the prefix sum until index 'i'
        ll score = pr[i];

        // since element at index 'i' can easily erase those <i
        back = max(back, i);

        // if back has already reached n - 1
        if (back == n - 1)
        {
            ans[p[i].second] = back;
            continue;
        }

        // else start from back + 1 to n - 1
        f(j, back + 1, n - 1)
        {

            if (score > a[j])
            {
                back = j;
                score += a[j];
            }
            else
                break;
        }

        ans[p[i].second] = back;
    }

    for (auto i : ans)
        cout << i << " ";

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