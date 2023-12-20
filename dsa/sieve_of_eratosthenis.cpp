#include "bits/stdc++.h"
using namespace std;

int main()
{
    // to print all prime numbers from 1 to n
    // Sieve eratostenis
    int n;
    cin >> n;
    vector<int> prime(n + 1, 1);

    prime[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        if (!prime[i])
            continue;

        for (int j = i * i; j <= n; j++)
        {
            prime[j] = 0;
        }
    }
}