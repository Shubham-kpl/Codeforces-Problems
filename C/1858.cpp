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
    int n;
    cin >> n;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (st.find(i) == st.end())
        {
            cout << i << " ";
            st.insert(i);
            int j = i;
            while (j * 2 <= n)
            {
                cout << j * 2 << " ";
                st.insert(j * 2);
                j *= 2;
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