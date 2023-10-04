/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 10/09/2023
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

int solve(ll n, ll m)
{
    if (m == n)
        return true;
    if (m > n || n % 3 != 0)
        return false;
    else
        return (solve(n / 3, m) || solve((2 * n) / 3, m));
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
        ll n, m;
        cin >> n >> m;
        cout << (solve(n, m) ? "YES" : "NO") << endl;
    }
    return 0;
}