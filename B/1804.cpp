/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 11/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (int i = 0; i < n; i++)
#define vi(v) vector<int> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n, k, d, w;
    cin >> n >> k >> d >> w;
    vi(v)(n);
    f(i, n) cin >> v[i];
    ll val = 0, flag = 0;
    f(i, n)
    {
        // ek baar ki dose maximum kitna serve kr skti hai
        int j = k;
        val = v[i] + d + w;
        while (i < n && val >= v[i] && j > 0)
            i++, j--;
        flag++;
        i--;
    }
    cout << flag << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}