/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 06/12/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f0(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i < n; i++)
#define vi vector<ll>
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

// Binary search
void solve1()
{
    ll n, k;
    cin >> n >> k;

    vi a(n);
    set<ll> st;
    f0(i, n)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    vi pref(n), suff(n);
    for (ll i = 0, mx = 0; i < n; i++)
    {
        mx = max(a[i], mx);
        pref[i] = mx;
    }

    for (ll i = n - 1, mx = 0; i >= 0; i--)
    {
        mx = max(a[i], mx);
        suff[i] = mx;
    }
    f1(i, k + 1)
    {
        if (st.find(i) == st.end())
        {
            cout << 0 << " ";
            continue;
        }

        // find first index >= "i"
        ll l = 0, r = n - 1, mid, left, right;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (pref[mid] < i)
            {
                l = mid + 1;
            }
            else
            {
                left = mid;
                r = mid - 1;
            }
        }

        // find last index >= "i"
        l = 0, r = n - 1;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (suff[mid] < i)
            {
                r = mid - 1;
            }
            else
            {
                right = mid;
                l = mid + 1;
            }
        }

        cout << 2 * (right - left + 1) << " ";
    }
    cout << endl;
}

// Two pointers
void solve()
{
    ll n, k;
    cin >> n >> k;

    vi a(n);
    set<ll> st;
    f0(i, n)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    vi pref(n), suff(n);
    for (ll i = 0, mx = 0; i < n; i++)
    {
        mx = max(a[i], mx);
        pref[i] = mx;
    }

    for (ll i = n - 1, mx = 0; i >= 0; i--)
    {
        mx = max(a[i], mx);
        suff[i] = mx;
    }

    ll left = 0, right = n - 1;
    f1(i, k + 1)
    {
        if (st.find(i) == st.end())
        {
            cout << 0 << " ";
            continue;
        }

        while (pref[left] < i)
        {
            left++;
        }
        while (suff[right] < i)
        {
            right--;
        }
        cout << 2 * (right - left + 1) << " ";
    }
    cout << endl;
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