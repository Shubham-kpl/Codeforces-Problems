/**
 * Coded on: 21-05-2024 23:30:58
 * Coded by: Shubham Kandpal
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    if (k == 1)
        cout << n << endl;
    else
    {
        long long res = 1;
        while (res < n)
        {
            res = res * 2 + 1;
        }
        cout << res << endl;
    }
}