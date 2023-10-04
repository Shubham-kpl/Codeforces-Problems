/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 28/08/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

#define vi(n) vector<int>(n);
#define f(i, s, e) for (int i = s; i < e; i++)
#define sa(a, n) sort(a, a + n)
#define sv(v) sort(v.begin(), v.end())

void solve()
{
    int n;
    cin >> n;
    int size = (n * (n - 1)) / 2;
    int *arr = new int[size];

    f(i, 0, size)
            cin >>
        arr[i];

    sa(arr, size);
    int s = 0, k = 1;
    while (s < size)
    {
        cout << arr[s] << " ";
        s = s + n - k++;
    }
    cout << arr[size - 1] << endl;
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