/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 16/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f(i, n) for (int i = 0; i < n; i++)
bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second >= b.second;
}
void solve()
{
    string w;
    cin >> w;
    int p;
    cin >> p;

    // creating copy string of w
    string s(w);
    sort(s.rbegin(), s.rend());

    // sum of values of w
    int sum = 0;
    int n = s.size();
    f(i, n) sum += s[i] - 'a' + 1;

    // creating map to store no. of deletions of an element
    map<char, int> mp;

    f(i, n)
    {
        if (sum > p)
        {
            mp[s[i]]++;
            sum -= (s[i] - 'a' + 1);
        }
        else
            break;
    }

    // printing values
    f(i, n)
    {
        if (mp[w[i]] > 0)
        {
            mp[w[i]]--;
        }
        else
            cout << w[i];
    }
    cout << endl;

    // TLE
    // vector<pair<int, int>> values;
    // int sum = 0;
    // for (int i = 0; i < w.size(); i++)
    // {
    //     values.pb(make_pair(i, w[i] - 'a' + 1));
    //     sum += (w[i] - 'a' + 1);
    // }
    // sort(values.begin(), values.end(), cmp);
    // int news = sum;
    // for (auto &i : values)
    // {
    //     if (news > p)
    //     {
    //         news -= i.second;
    //         i.second = 0;
    //     }
    //     else
    //         break;
    // }

    // sort(values.begin(), values.end());
    // for (auto i : values)
    // {
    //     if (i.second != 0)
    //         cout << w[i.first];
    // }
    // cout << endl;
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