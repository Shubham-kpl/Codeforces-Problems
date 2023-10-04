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
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        if (arr[0] = 1)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    else {
        int hcf = __gcd(arr[0], arr[1]);
        for(int j = 2; j < n; j++) {
            hcf = __gcd(hcf, arr[j]);
            if(hcf == 1) {
                cout << 0 << endl;
                return;
            }
        }
        for()
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