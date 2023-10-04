/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 28/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    s = "0" + s;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i + 1] >= '5')
        {
            for (int j = i + 1; j < n; j++)
                s[j] = '0';
            s[i] = char(int(s[i]) + 1);
            if (s[i] == '5')
            {
                int k = i - 1;
                while (k >= 0 && s[k] == '4')
                {
                    k--;
                }
                s[k] = char(int(s[k]) + 1);
                for(int j = k + 1; j <= i; j++) {
                    s[j] = '0';
                }
            }
            break;
        }
    }
    if (s[0] == '0'){
        for (int i = 1; i < n; i++)
            cout << s[i];
        cout << endl;
    }
    else
        cout << s << endl;
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