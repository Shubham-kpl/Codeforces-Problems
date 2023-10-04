/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 12/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define pb push_back
#define f(i, n) for (int i = 0; i < n; i++)
#define vi(v) vector<int> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    int n;
    cin >> n;
    vi(v)(n);
    f(i, n) cin >> v[i];
    int sum = (n * (n + 1)) / 2;
    cout << "sum " << sum << endl;
    if (v[n - 2] < sum)
    {
        v[n - 1] = sum;
        vi(diff)(n);
        set<int> st;
        diff[0] = v[0], st.insert(diff[0]);
        for (int i = 1; i < n; i++)
            diff[i] = v[i] - v[i - 1], st.insert(diff[i]);

        if (st.size() != diff.size())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else if (v[n - 2] > sum)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "HO" << endl;
        set<int> st;
        if (v[0] > n)
        {
            int x = 0;
            for (int i = 1; i < n - 1; i++)
            {
                x += v[i] - v[i - 1];
                st.insert(v[i - 1]);
            }
            if (st.size() != n - 2)
            {
                cout << "NO" << endl;
                return;
            }
            if (sum - x == v[0])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            st.insert(v[0]);
            int save = v[0], rem;
            for (int i = 1; i < n - 1; i++)
            {
                if (v[i] - v[i - 1] <= n)
                    save += (v[i] - v[i - 1]), st.insert(diff[i]);
                else
                    rem = v[i] - v[i - 1];
            }
            if (st.size() != n - 1)
                cout << "NO" << endl;
            else
            {
                if (rem == sum - save)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
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