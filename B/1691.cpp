/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 05/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> s(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]].push_back(i + 1);
    }
    for (auto i : mp)
    {
        if (i.second.size() == 1)
        {
            cout << "-1" << endl;
            return;
        }
    }
    for (auto i : mp)
    {
        for (int j = 1; j < i.second.size(); j++)
            cout << i.second[j] << " ";
        cout << i.second[0] << " ";
    }
    cout << endl;
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