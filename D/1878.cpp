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

void solve()
{
    // INPUTS
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vi(l)(k);
    f(i, k) cin >> l[i];
    vi(r)(k);
    f(i, k) cin >> r[i];

    ll q;
    cin >> q;

    vi(x)(q);
    f(i, q) cin >> x[i];

    // locating partitions (PAINTING WITH SAME COLOR)
    vector<ll> findPartition(n);
    f(i, k)
    {
        for (ll j = l[i] - 1; j <= r[i] - 1; j++)
        {
            findPartition[j] = i; // we are grouping elements that contribute to the same partition
        }
    }

    // calculate "frequency" using x array
    vi(freq)(n);
    f(i, q)
    {
        // get the suitable partition for "x"
        ll partition = findPartition[x[i] - 1];
        ll left = l[partition];
        ll right = r[partition];

        // find the right element to facilitate reversing
        ll frqGuy = min(x[i], left + right - x[i]) - 1;
        freq[frqGuy]++;
    }

    // solve problem for each partition seperately
    f(i, k)
    {
        ll left = l[i] - 1, right = r[i] - 1;
        ll sumfreq = 0;
        for (ll j = left; j <= right; j++)
        {
            ll a = j, b = left + right - j;
            if (b < a)
            {
                break;
            }
            sumfreq += freq[a];
            if (sumfreq % 2 != 0)
            {
                swap(s[a], s[b]);
            }
        }
    }

    cout << s << endl;
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