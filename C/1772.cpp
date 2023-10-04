/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 04/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, n;
    cin >> k >> n;

    cout << 1 << " ";
    int inc = 1, remEle = 0, remPos = 0, total = 1;
    for (int i = 1; i < k; i++)
    {
        remEle = n - (total + inc);
        remPos = k - i - 1;
        if (remEle >= remPos)
        {
            cout << total + inc << " ";
            total += inc;
            inc++;
        }
        else
        {
            while(i < k) {
                cout << total + 1 << " ";
                total += 1;
                i++;
            }
        }
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