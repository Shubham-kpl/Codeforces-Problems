/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is: 
* Coded on : 29/08/2023
* Coded by: Shubham Kandpal

*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    if(n == 1) cout << -1 << endl;
    else if(n == 2) {
        if(v[0] == v[1]) cout << -1 << endl;
        else cout << 1 << endl << 1 << endl;
    }
    else {
        int sum = 0;
        for(int i = 1; i < n; i++) sum+=v[i];
        if(sum != v[0]) {
            cout << 1 << endl;
            cout << 1 << endl;
        }
        else {
            cout << 1 << endl;
            cout << 2 << endl;
        }
    }
}

int main () {
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    return 0;
}