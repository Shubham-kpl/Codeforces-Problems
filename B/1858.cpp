/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 29/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

// TLE --> Simple recursion
// void solve()
// {
//     int n, m, d;
//     cin >> n >> m >> d;
//     vector<int> ip(m);
//     set<int> st;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> ip[i];
//         st.insert(ip[i] - 1);
//     }

//     int i = 0, cnt = 0, mini = INT_MAX, ele = 0, val;
//     set<int>::iterator it = st.begin();
//     for (int k = 0; k < m; k++)
//     {
//         st.erase(it);
//         for (int j = 0; j < n; j++)
//         {
//             if (j == 0 || (j - i >= d) || st.find(j) != st.end())
//             {
//                 cnt++;
//                 i = j;
//             }
//         }
//         if (mini >= cnt)
//         {
//             if (mini == cnt)
//             {
//                 ele++;
//             }
//             else
//             {
//                 ele = 1;
//             }

//             mini = min(mini, cnt);
//         }
//         st.insert(*it);
//         it++;
//         cnt = 0;
//     }

//     cout << mini << " " << ele << endl;
// }

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> ip(m + 2);
    ip[0] = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> ip[i];
        ip[i]--;
    }
    ip[m + 1] = n - 1;
    int val1 = 0, val2 = 0, val3 = 0, ans = INT_MAX, freq = 0;
    for (int i = 1; i <= m; i++)
    {
        val1 = (ip[i] - ip[i - 1] - 1) / d;
        val2 = (ip[i + 1] - ip[i] - 1) / d;
        val3 = (ip[i + 1] - ip[i - 1] - 1) / d;
        if (val1 + val2 >= val3)
        {
            ans = min(ans, val3);
            if (ans == val3)
            {
                freq++;
            }
            else
                freq = 1;
        }
    }
    cout << ans << " " << freq << endl;
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