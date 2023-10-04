/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 13/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f(i, n) for (int i = 0; i < n; i++)
#define vi(v) vector<int> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi(v1)(26);
    vi(v2)(26);
    for (auto i : s)
        v1[i - 'a']++;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        --v1[s[i] - 'a'];
        ++v2[s[i] - 'a'];

        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            cnt += (min(v1[i], 1) + min(v2[i], 1));
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
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