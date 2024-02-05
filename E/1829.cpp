/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 28/01/2024
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
#define maxv(a) *max_element(all(a)
#define minv(a) *min_element(all(a)

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
bool check(ll i, ll j, ll n, ll m)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return 0;
    return 1;
}

ll shubh(vvi &a, vvi &v, ll i, ll j)
{
    // base case
    if (v[i][j] == 1 || a[i][j] == 0)
    {
        return 0;
    }

    // recursion
    ll cnt = a[i][j];
    v[i][j] = 1;
    ll n = a.size(), m = a[0].size();
    if (check(i + 1, j, n, m))
    {
        cnt += shubh(a, v, i + 1, j);
    }
    if (check(i - 1, j, n, m))
    {
        cnt += shubh(a, v, i - 1, j);
    }
    if (check(i, j + 1, n, m))
    {
        cnt += shubh(a, v, i, j + 1);
    }
    if (check(i, j - 1, n, m))
    {
        cnt += shubh(a, v, i, j - 1);
    }
    return cnt;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vvi a(n, vi(m));
    f(i, 0, n - 1)
    {
        f(j, 0, m - 1) cin >> a[i][j];
    }

    vvi v(n, vi(m, 0));
    ll res = 0;
    f(i, 0, n - 1)
    {
        f(j, 0, m - 1)
        {
            if (a[i][j] || !v[i][j])
            {
                res = max(res, shubh(a, v, i, j));
            }
        }
    }
    pf(res);
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