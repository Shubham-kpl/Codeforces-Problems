/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 20/08/2023
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
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int last = -1;
        for (int i = n - 1; i >= 1; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                last = i - 1;
                break;
            }
        }
        if (last == -1)
            cout << 0 << endl;
        else
        {
            set<int> st;
            for (int j = 0; j <= last; j++)
            {
                st.insert(arr[j]);
                arr[j] = 0;
            }
            for (int i = n - 1; i > last; i--)
            {
                if (st.find(arr[i]) != st.end())
                {
                    for (int j = last + 1; j <= i; j++)
                    {
                        st.insert(arr[j]);
                        arr[j] = 0;
                    }
                }
            }
            cout << st.size() << endl;
        }
    }

    return 0;
}