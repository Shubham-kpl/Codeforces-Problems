

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1 || n == 2 || n == 3)
    {
        cout << "NO" << endl;
        return;
    }

    set<string> valu;
    int ans = -1;
    for (int i = 1; i < n - 1; i += 1)
    {
        string str = "", str2 = "";
        str += s[i - 1];
        str2 += s[i];
        str += s[i];
        str2 += s[i + 1];
        if (valu.find(str2) != valu.end())
        {
            ans = 0;
            break;
        }
        valu.insert(str);
    }
    if (ans == -1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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