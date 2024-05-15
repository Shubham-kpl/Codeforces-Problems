#include <bits/stdc++.h>
using namespace std;

bool checkSub(vector<int> a, vector<int> b)
{
    int n = a.size(), m = b.size();
    if (n < m)
        return 0;

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            i++, j++;
            if (j == m)
                return 1;
        }
        else
            j = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[0])
        {
            int j = i;
            int k = 0;
            while (j < n && a[j] == b[k])
            {
                j++, k++;
                if (k == m)
                    return 1;
            }
        }
    }
    return 0;
}

int main()
{

    // int n = 5, m = 3;
    // vector<int> a(n), b(m);
    // for (int i = 0; i < n; i++)
    //     cin >> a[i];
    // for (int i = 0; i < m; i++)
    //     cin >> b[i];

    // cout << checkSub(a, b) << endl;
    int a = 2, b = 3;
    cout << a++ + b;
    return 0;
}