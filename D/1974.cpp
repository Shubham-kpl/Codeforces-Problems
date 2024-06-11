/**
* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* Coded on: 20-05-2024 20:35:24
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

/* CONSTANTS */
const ll mod = 1e9 + 7;

/* DRIVER FUNCTION */
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (s.size() % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    // map<char, int> mp;

    // ll p = -1, q = -1;
    // f(i, 0, n - 1)
    // {
    //     if (mp[s[i]] != 0)
    //     {
    //         p = mp[s[i]] - 1, q = i;
    //         break;
    //     }
    //     mp[s[i]] = i + 1;
    // }
    // if (p == -1)
    // {
    //     cout << "NO" << endl;
    //     return;
    // }

    // cout << p << " " << q << endl;

    ll w = 0, x = 0, y = 0, z = 0;
    f(i, 0, n - 1)
    {
        // if (i == p || i == q)
        //     continue;
        if (s[i] == 'S')
            w++;
        else if (s[i] == 'N')
            x++;
        else if (s[i] == 'E')
            y++;
        else
            z++;
    }
    if ((x + w) % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    bool chk1 = 0, chk2 = 0;
    if (x % 2 != 0)
        chk1 = 1;
    if (y % 2 != 0)
        chk2 = 1;

    string res = "";
    f(i, 0, n - 1) res += 'a';

    char w1 = 'R', x1 = 'R', y1 = 'R', z1 = 'R';

    f(i, 0, n - 1)
    {
        // if (i == p)
        //     res[i] = 'R';
        // else if (i == q)
        //     res[i] = 'H';
        if (s[i] == 'N' || s[i] == 'S')
        {
            if (chk1)
            {
                res[i] = 'R';
                int j = i + 1;
                while (j < n && s[j] != (s[i] == 'N' ? 'S' : 'N'))
                    j++;
                res[j] = 'R';
                chk1 = false;
            }
            else
            {
                if (s[i] == 'N')
                {
                    res[i] = w1;
                    w1 = (w1 == 'R') ? 'H' : 'R';
                }
                else if (s[i] == 'S')
                {
                    res[i] = x1;
                    x1 = (x1 == 'R') ? 'H' : 'R';
                }
            }
        }
        else
        {
            if (chk2)
            {
                res[i] = 'R';
                int j = i + 1;
                while (j < n && s[j] != (s[i] == 'E' ? 'W' : 'E'))
                    j++;
                res[j] = 'R';
                chk2 = false;
            }
            else
            {

                if (s[i] == 'E')
                {
                    res[i] = y1;
                    y1 = (y1 == 'R') ? 'H' : 'R';
                }
                else if (s[i] == 'W')
                {
                    res[i] = z1;
                    z1 = (z1 == 'R') ? 'H' : 'R';
                }
            }
        }
    }

    f(i, 0, n - 2)
    {
        if (res[i] != res[i + 1])
        {
            cout << res << endl;
            return;
        }
    }
    cout << "NO" << endl;
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