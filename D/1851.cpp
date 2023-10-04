/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 04/10/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi(v) vector<ll> v
#define vvi(v) vector<vector<ll>> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())

void solve()
{
    ll n;
    cin >> n;

    vi(v)(n);
    f(i, n - 1) cin >> v[i];

    // sum
    ll sum = (n * (n + 1)) / 2;

    // ye bilkul sahi hai
    if (v[n - 2] < sum)
    {
        v[n - 1] = sum;
        vi(diff)(n);
        set<ll> st;
        diff[0] = v[0], st.insert(diff[0]);
        for (ll i = 1; i < n; i++)
            diff[i] = v[i] - v[i - 1], st.insert(diff[i]);

        if (st.size() != diff.size())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    // ye bhi shi hai
    else if (v[n - 2] > sum)
    {
        cout << "NO" << endl;
    }

    else
    {
        map<ll, ll> mp;
        mp[v[0]]++;
        ll cnt = 0; 
        for (ll i = 1; i < n - 1; i++)
        {
            mp[v[i] - v[i - 1]]++;
            if (mp[v[i] - v[i - 1]] > 1) cnt++;
            if(cnt > 1) {
                cout << "NO" << endl;
                return;
            }
            if(mp[v[i] - v[i - 1]] > 2) {
                cout << "NO" << endl;
                return;
            }
        }
        cnt = 0;
        for(ll i = 1; i <= n; i++) {
            if(mp[i] == 0) cnt++;
        }
        if(cnt != 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}