#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int sz = 100;
    // vector<int> v;

    // auto cap = v.capacity();
    // cout << "Initial size: " << v.size() << ", capacity: " << cap << '\n';

    // cout << "\nDemonstrate the capacity's growth policy."
    //         "\nSize:  Capacity:  Ratio:\n"
    //      << left;
    // while (sz-- > 0)
    // {
    //     v.push_back(sz);
    //     if (cap != v.capacity())
    //     {
    //         cout << setw(7) << v.size()
    //              << setw(11) << v.capacity()
    //              << setw(10) << v.capacity() / static_cast<float>(cap) << '\n';
    //         cap = v.capacity();
    //     }
    // }

    // cout << "\nFinal size: " << v.size() << ", capacity: " << v.capacity() << '\n';

    while (true)
    {
        int i;
        cin >> i;
        cout << i << " " << ~i << endl;
    }
}