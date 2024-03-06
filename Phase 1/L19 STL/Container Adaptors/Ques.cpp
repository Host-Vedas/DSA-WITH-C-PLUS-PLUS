#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> quy;
    quy.push("Nischal");
    quy.push("kaale");
    quy.push("Dai");
    quy.push("Parva");
    quy.push("Jhijhya");
    cout << " Size after pop " << quy.size() << endl;
    cout << " First Element " << quy.front() << endl;
    quy.pop();
    cout << " First Element " << quy.front() << endl;
    cout << " Size after pop " << quy.size() << endl;
    return 0;
}