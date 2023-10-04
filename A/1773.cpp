/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 27/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, one, two;
    cin >> n >> one >> two;

    if (n > one + two)
    {
        cout << n - one - two << endl;
        for (int i = 0; i < one; i++)
        {
            cout << "1:0" << endl;
        }
        for (int i = 0; i < two; i++)
        {
            cout << "0:1" << endl;
        }
        for (int i = 0; i < n - one - two; i++)
            cout << "0:0" << endl;
    }

    else if (n == 1)
    {
        if (one == two)
        {
            cout << 1 << endl;
            cout << one << ":" << two << endl;
        }
        else
        {
            cout << 0 << endl;
            cout << one << ":" << two << endl;
        }
    }

    else if (one == 0 || two == 0)
    {
        cout << 0 << endl;
        if (one == 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << "0:1" << endl;
            }
            cout << "0:" << two - (n - 1) << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << "1:0" << endl;
            }
            cout << one - (n - 1) << ":" << 0 << endl;
        }
    }

    else
    {
        cout << 0 << endl;
        vector<string> s;
        int x = 0, y = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (i % 2 == 0)
            {
                x++;
                s.push_back("1:0");
            }
            else
            {
                y++;
                s.push_back("0:1");
            }
        }
        if (one - x == 0 || two - y == 0)
        {
            if (one - x == 0)
            {
                cout << "0:" << 1 << endl;
                cout << "0:" << two - y - 1 << endl;
            }
            else
            {
                cout << "1:" << 0 << endl;
                cout << one - x - 1 << ":" << 0 << endl;
            }
        }
        else
        {
            cout << one - x << ":0" << endl;
            cout << "0:" << two - y << endl;
        }
        for (auto i : s)
        {
            cout << i << endl;
        }
    }
    return 0;
}