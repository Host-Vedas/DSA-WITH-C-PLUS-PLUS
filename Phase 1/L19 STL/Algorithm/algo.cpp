#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> vak;
    vak.push_back(5);
    vak.push_back(7);
    vak.push_back(8);
    vak.push_back(9);
    vak.push_back(10);
    vak.push_back(12);
    cout << " finding 5 -> " << binary_search(vak.begin(), vak.end(), 5) << endl;
    cout << " finding 6 -> " << binary_search(vak.begin(), vak.end(), 6) << endl;

    cout << "lower bound for 6 -> " << lower_bound(vak.begin(), vak.end(), 6) - vak.begin() << endl;
    cout << "lower bound for 9 ->" << lower_bound(vak.begin(), vak.end(), 9) - vak.begin() << endl;
    cout << "upper bound for 9 ->" << upper_bound(vak.begin(), vak.end(), 9) - vak.begin() << endl;

    return 0;
}