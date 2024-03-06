#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> mp;
    mp[1] = "babar";
    mp[6] = "love";
    mp[5] = "kumar";
    for (auto i : mp)
    {
        cout << i.first << "  "<<i.second<<endl;
    }
    return 0;
}