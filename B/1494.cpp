/**
 * Coded on: 22-05-2024 21:04:29
 * Coded by: Shubham Kandpal
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define f(i, a, b) for (ll i = a; i <= b; ++i)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;

        ll flag = 0;

        // we'll use bits to check which of the corners will be filled
        f(i, 0, 15)
        {
            ll c1 = u, c2 = r, c3 = d, c4 = l;
            if (i & (1 << 0))
                c1--, c4--;
            if (i & (1 << 1))
                c2--, c1--;
            if (i & (1 << 2))
                c3--, c2--;
            if (i & (1 << 3))
                c4--, c3--;

            // up
            if (min(c1, min(c2, min(c3, c4))) >= 0 && max(c1, max(c2, max(c3, c4))) <= n - 2)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
    }
}