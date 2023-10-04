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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int mini = v[0], minW = INT_MAX, ans = 0;
    // mini is the minimum value till now
    // minW is the minimum winning position till now
    for(int i = 1; i < n; i++) {
        // mini = min(v[i], mini);
        if(mini < v[i]) {
            if(minW > v[i]) {
                minW = min(v[i], minW);
                ans++;
            }
        }
        else mini = min(v[i], mini);
    }
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