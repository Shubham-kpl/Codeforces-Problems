/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 01/05/2024
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;

/* MACROS */
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pf(val) cout << val << endl;
#define f(i, a, b) for (ll i = a; i <= b; ++i)
#define fr(i, a, b) for (ll i = a; i >= b; --i)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vp vector<pair<ll, ll>>
#define sv(v) sort(v.begin(), v.end())
#define svr(v) sort(v.rbegin(), v.rend())
#define rv(v) reverse(v.begin(), v.end())
#define sa(a) sort(a, a + n)
#define ra(a) reverse(a, a + n)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c));
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define maxa(a) *max_element(a, a + n)
#define mina(a) *min_element(a, a + n)
#define maxv(a) *max_element(all(a))
#define minv(a) *min_element(all(a))

#define M 1000001return cmb(n, r) * fact(r);

int invCount = 0;

void merge(vector<int> &nums, int l, int mid, int r)
{
    int i = l, j = mid + 1;
    int n1 = mid + 1 - l, n2 = r - mid;

    vector<int> arr;

    while (i <= mid && j <= r)
    {
        if (nums[i] <= nums[j])
        {
            arr.pb(nums[i++]);
        }
        else
        {
            arr.pb(nums[j++]);
            invCount += (n1 - i);
        }
    }

    while (i <= mid)
    {
        arr.pb(nums[i++]);
    }

    while (j <= r)
    {
        arr.pb(nums[j++]);
    }

    int k = l;
    for (auto i : arr)
    {
        nums[k++] = i;
    }
}

void mergeSort(vector<int> &nums, int l, int r)
{
    if (l == r)
        return;

    int mid = (l + r) / 2;
    mergeSort(nums, l, mid);
    mergeSort(nums, mid + 1, r);
    merge(nums, l, mid, r);
}

int main()
{
    vector<int> arr = {-2, -4, -1, 9, 1, 2, 3};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);

    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    cout << invCount << endl;
    return 0;
}