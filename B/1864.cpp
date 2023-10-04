/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 31/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k % 2 == 0)
    {
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }
    else
    {
        string p = s;
        sort(s.begin(), s.end());
        map<int, vector<char>> mp, cp;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                mp[0].push_back(s[i]);
            else
                mp[1].push_back(s[i]);
            if (i % 2 == 0)
                cp[0].push_back(p[i]);
            else
                cp[1].push_back(p[i]);
        }
        for (auto i : mp)
        {
            sort(i.second.begin(), i.second.end());
        }
        for (auto i : cp)
            sort(i.second.begin(), i.second.end());

        if (mp[0] == cp[0])
        {
            cout << s << endl;
            return;
        }
        vector<char> even, odd;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even.push_back(p[i]);
            else
                odd.push_back(p[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        int j = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                s[i] = even[j++];
            else
                s[i] = odd[k++];
        }
        cout << s << endl;
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