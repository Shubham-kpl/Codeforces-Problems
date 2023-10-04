/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 08/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> qu(n);
    for (ll i = 0; i < n; i++)
        cin >> qu[i];

    cout << 1;
    ll flag = 0;
    ll last = qu[0];
    for (ll i = 1; i < n; i++)
    {
        if (qu[i] >= last)
        {
            cout << 1;
            last = qu[i];
        }
        else
        {
            if (flag == 0 && qu[i] <= qu[0])
            {
                cout << 1;
                last = qu[i];
                i++;
                while (i < n)
                {
                    if (qu[i] >= last && qu[i] <= qu[0])
                    {
                        cout << 1;
                        last = qu[i];
                        i++;
                    }
                    else
                    {
                        cout << 0;
                        i++;
                    }
                }
                i--;
                flag++;
            }
            else
                cout << 0;
        }
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}