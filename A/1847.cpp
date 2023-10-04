/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 18/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
            cout << 0 << endl;
        else
        {
            vector<int> diff(n - 1);
            for (int i = 1; i < n; i++)
            {
                diff.push_back(abs(arr[i] - arr[i - 1]));
            }
            sort(diff.begin(), diff.end());
            while (k - 1 > 0)
            {
                diff.pop_back();                k--;
            }
            int ans = 0;
            for (auto i : diff)
                ans += i;
            cout << ans << endl;
        }
    }
    return 0;
}