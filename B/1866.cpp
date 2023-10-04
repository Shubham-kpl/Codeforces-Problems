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
#define f(i, n) for (int i = 0; i < n; i++)
#define vi(v) vector<int> v

void solve()
{
    ll n;
    cin >> n;
    vi(a)(n), (b)(n);
    f(i, n) cin >> a[i];
    f(i, n) cin >> b[i];
    map<int, int> mp;
    f(i, n) mp[a[i]] = b[i];
    ll m;
    cin >> m;
    vi(c)(m), (d)(m);
    f(i, m) cin >> c[i];
    f(i, m) cin >> d[i];
    map<int, int> sp;
    f(i, n) sp[c[i]] = d[i];

    int cnt = 0;
    set<int> st;
    f(i, n)
    {
        if (mp[a[i]] < sp[a[i]])
        {
            cout << 0 << endl;
            return;
        }
        else if (mp[a[i]] > sp[a[i]])
        {
            cnt++;
            st.insert(a[i]);
        }
    }
    f(i, m)
    {
        if (st.find(c[i]) == st.end())
        {
            if (mp[c[i]] < sp[c[i]])
            {
                cout << 0 << endl;
                return;
            }
            else if (mp[c[i]] > sp[c[i]])
                cnt++;
        }
    }
    cout << pow(2, cnt) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;
    // while(t--) {
    solve();
    // }
    return 0;
}