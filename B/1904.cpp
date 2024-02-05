/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on :  06/01/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define pf(val) cout << val << endl;
#define f(i, a, b) for (ll i = a; i <= b; ++i)
#define fr(i, a, b) for (ll i = a; i >= b; --i)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vp vector<pair<ll, ll>>
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)
#define svr(v) sort(v.begin(), v.end(), greater<ll>())
#define rv(v) reverse(v.begin(), v.end())
#define ra(a) reverse(a, a + n)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c));
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())

/**
* SORT VECTOR PAIR BASED ON SECOND VALUE
  std::sort(v.begin(), v.end(), [](auto &left, auto &right)
[object Object]

*/

// Sort map based on value
bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second < b.second;
}

#define M 1000001

/* NUMBER THEORY */
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

/* SMALLEST PRIME FACTOR */
int spf[M];
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < M; i++)
        spf[i] = i;
    for (int i = 4; i < M; i += 2)
        spf[i] = 2;
    for (int i = 3; i * i < M; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < M; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

/* PRIME FACTORISATION */
void getFactorization(int x)
{
    while (x != 1)
    {
        x = x / spf[x];
    }
}

/* Check if number is prime */
bool isPrime(ll n)
{
    if (n == 2)
        return true;
    if (n == 1 || n % 2 == 0)
        return 0;
    for (int i = 2; i <= n / 2; ++i)
        if (n % i == 0)
            return 0;
    return 1;
}

/* COMINATORICS */
ll fact(ll val)
{
    if (val == 0 || val == 1)
        return 1;
    return val * fact(val - 1);
}

ll cmb(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

ll perm(ll n, ll r)
{
    return cmb(n, r) * fact(r);
}

/* CONSTANTS */
const ll mod = 1e9 + 7;

/* DRIVER FUNCTION */
void solve()
{
    ll n;
    cin >> n;

    vi a(n);
    f(I, 0, n - 1) cin >> a[I];

    // Method 2
    vp v;
    f(i, 0, n - 1) v.pb({a[i], i});
    sv(v);
    vi pref;
    ll sum = 0;
    for (auto i : v)
    {
        sum += i.first;
        pref.pb(sum);
    }

    vi ans(n);
    ll j = 1, cnt = 0;
    f(i, 0, n - 1)
    {
        while (j < n && (v[j].first <= pref[j - 1]))
        {
            j++;
            cnt++;
        }
        ans[v[i].second] = cnt;
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    // vector<pair<int, int>> v;

    // f(i, 0, n - 1) v.push_back({a[i], i});

    // sv(v);

    // vi p(n);
    // p[0] = v[0].first;
    // f(i, 1, n - 1) p[i] = p[i - 1] + v[i].first;

    // vi ans(n);

    // f(i, 0, n - 1)
    // {
    //     ll l = i + 1, r = n - 1, mid, cnt = i;
    //     ll score = p[i];

    //     while (l <= r)
    //     {
    //         mid = (l + (r - l) / 2);
    //         if (p[mid - 1] >= v[mid].first)
    //         {
    //             cnt = mid + 1;
    //             l = mid + 1;
    //         }
    //         else
    //             r = mid - 1;
    //     }
    //     ans[v[i].second] = cnt;
    // }

    // for (auto i : ans)
    //     cout << i << " ";
    // cout << endl;
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