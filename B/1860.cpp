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
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

    // maximum coins that can be taken having worth k
    int taken_k = m / k;
    int fancy_k = max(0, taken_k - ak);
    int taken_1 = m % k;
    int fancy_1 = max(0, taken_1 - a1);
    int left_regular_1 = max(0, a1 - taken_1);
    int to_replace = min(left_regular_1 / k, fancy_k);
    int ans = fancy_1 + fancy_k - to_replace;
    cout << ans << endl;
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