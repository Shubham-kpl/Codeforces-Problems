/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 09/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (int i = 1; i <= n; i++)
#define vi(v) vector<int> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n;
    cin >> n;
    vi(v)(n + 1);
    f(i, n) cin >> v[i];
    vi(m)(n + 1);
    if (v[0] != n)
        cout << "NO" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            m[v[i]]++; // calculating frequency of each element
        }
        for (int i = n - 1; i > 0; i--)
        {
            m[i] += m[i + 1];
        }
        for (int i = 1; i <= n; i++)
        {
            if (m[i] != v[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    
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