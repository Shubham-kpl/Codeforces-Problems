/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 20/04/2024
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
    int n;
    cin >> n;

    vi a(n);
    f(i, 0, n - 1) cin >> a[i];

    // int i = 0, j = n - 1;

    // // remove elements from begin
    // while (i <= n - 1)
    // {
    //     if (a[i] != a[n - 1])
    //         break;
    //     else
    //         i++;
    // }

    // // from end
    // while (j >= 0)
    // {
    //     if (a[j] != a[0])
    //     {
    //         break;
    //     }
    //     else
    //         j--;
    // }

    // // from mid
    // int prev = 0, ans = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] != a[0])
    //     {
    //         if (prev == 0)
    //             prev = i;
    //         else
    //             ans = min(ans, i - prev - 1);
    //     }
    // }

    // if (i == n)
    // {
    //     cout << -1 << endl;
    //     return;
    // }

    // cout << min(ans, min(i, n - j - 1)) << endl;

    ll prev = -1;
    ll ans = n;

    f(i, 0, n - 1)
    {
        if (a[i] != a[0])
        {
            ans = min(ans, i - prev - 1);
            prev = i;
        }
    }

    if (ans == n)
    {
        cout << -1 << endl;
    }
    else
        cout << min(n - prev - 1, ans) << endl;
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