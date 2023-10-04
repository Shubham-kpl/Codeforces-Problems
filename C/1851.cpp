#include <bits/stdc++.h>
using namespace std;

bool solve(int c[], int n, int k)
{
    int i1 = 0, idx1 = 0, i2 = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == c[0])
        {
            i1++;
            if (i1 == k)
            {
                idx1 = i;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        return false;
    }
    if (flag == 1 && c[n - 1] == c[0])
        return true;
    for (int i = n - 1; i > idx1; i--)
    {
        if (c[i] == c[n - 1])
        {
            i2++;
            if (i2 == k)
                return true;
        }
    }
    return false;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int *c = new int[n];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        if (solve(c, n, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}