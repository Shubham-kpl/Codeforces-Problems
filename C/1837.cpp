/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 29/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    s = '0' + s;
    for(int i = 0; i < s.size(); i++) {
        s[i] = (s[i] == '?' ? s[i - 1] : s[i]);
    }
    for(int i = 1; i < s.size(); i++) {
        cout << s[i];
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