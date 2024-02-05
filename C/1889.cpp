/**
 *    author:  anotherTourist
 *    created: 03.02.2024
 **/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    /*
    tt = 1;
    */
    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int _1 = 0, _0 = 0;
        for (char c : s)
        {
            if (c == '0')
                _0++;
            else
                _1++;
        }

        if (_0 != _1)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> res;

        int len = n;
        int st = 1;
        while (len > 0)
        {
            if (s[0] == s[len - 1])
            {
                if (s[0] == '0')
                {
                    res.push_back(len);
                    s += "01";
                }
                else
                {
                    res.push_back(st - 1);
                    s = "01" + s;
                }
                len += 2;
            }

            s = s.substr(1, s.size() - 2);
            st += 2;
            len = len - 2;
        }

        cout << res.size() << endl;
        for (auto I : res)
            cout << I << " ";
        cout << endl;
    }
    return 0;
}
