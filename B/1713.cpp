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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1 || n == 2)
        cout << "YES" << endl;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if(v[i] > v[i + 1])
            {
                while (i + 1 < n)
                {
                    if (v[i] < v[i + 1])
                    {
                        cout << "NO" << endl;
                        return;
                    }
                    i++;
                }
                if (i == n - 1)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        cout << "YES" << endl;
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