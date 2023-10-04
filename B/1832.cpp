/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is: 
* Coded on : 15/09/2023
* Coded by: Shubham Kandpal

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for(ll i = 0; i < n; i++)
#define vi vector<ll>
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve() {
    ll n, k;
    cin >> n >> k;
    vi v(n), pre(n + 1);
    f(i, n) {
        cin >> v[i];
        pre[i + 1] = pre[i] + v[i];
    }
    ll sum = 0;
    f(i, k) {
        sum = max(sum,)
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}