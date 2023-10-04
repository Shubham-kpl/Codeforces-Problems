/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 12/09/2023
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

void solve()
{
    string a, b;
    cin >> a >> b;
    if (a[0] == b[0])
    {
        cout << "YES" << endl
             << a[0] << "*" << endl;
        return;
    }
    if (a.back() == b.back())
    {
        cout << "YES" << endl
             << "*" << a.back() << endl;
        return;
    }
    if(a.size() == 1 || b.size() == 1) {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for (int j = 0; j <= a.size() - 2; j++)
        {
            string str = a.substr(j, 2);
            if (b.find(str) != -1)
            {
                cout << "YES" << endl;
                cout << "*" << str << "*" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
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