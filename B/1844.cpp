/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 08/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int k = 1;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2)
        cout << 2 << " " << 1 << endl;
    else
    {
        cout << 3 << " ";
        int k = 1;
        for (int i = 1; i < n / 2; i++)
        {
            cout << 3 + k++ << " ";
        }
        cout << 1 << " ";
        for (int i = n / 2 + 1; i < n - 1; i++)
            cout << 3 + k++ << " ";
        cout << 2 << " ";
        cout << endl;
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