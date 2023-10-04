/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 31/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
            a++;
        else
            b++;
    }
    int flag1 = 0, flag2 = 0;
    vector<int> values(n);
    if (a != b)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                flag1 = 1;
                st.push(')');
                values[i] = 1;
                while (!st.empty())
                {
                    i++;
                    values[i] = 1;
                    if (s[i] == ')')
                    {
                        st.push(')');
                    }
                    else
                        st.pop();
                }
            }
            else
            {
                flag2 = 1;
                st.push('(');
                values[i] = 2;
                while (!st.empty())
                {
                    i++;
                    values[i] = 2;
                    if (s[i] == '(')
                    {
                        st.push('(');
                    }
                    else
                        st.pop();
                }
            }
        }
    }
    cout << (flag1 == flag2 ? 2 : 1) << endl;
    if (flag1 != flag2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << 1 << ' ';
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << values[i] << ' ';
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