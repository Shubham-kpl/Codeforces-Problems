/**
 * Coded on: 18-05-2024 20:05:24
 * Coded by: Shubham Kandpal
 */

#include <bits/stdc++.h>
using namespace std;

#define f(i, a, b) for (ll i = a; i <= b; ++i)

int main()
{
    int *arr = new int[5];
    arr[1] = 2;
    arr[0] = 4;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    // int **a = new int *;

    // **a = 1;

    // **(a + 1) = 4;

    int *c = new int;
    *c = 5;
    cout << *c << endl;

    // for (int i = 0; i < 2; i++)
    //     cout << *a[i] << endl;
}