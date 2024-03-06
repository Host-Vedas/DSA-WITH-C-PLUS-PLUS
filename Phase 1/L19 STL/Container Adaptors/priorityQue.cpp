#include <iostream>
#include <queue>
// related to heap
// first element graeatest
using namespace std;
int main()
{
    // max heap
    priority_queue<int> maxi;
    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(5);
    maxi.push(3);
    maxi.push(6);
    maxi.push(0);
    cout << " size --> " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << "     ";
        maxi.pop();
    }
    cout << "       mini        " << endl;
    mini.push(1);
    mini.push(5);
    mini.push(3);
    mini.push(6);
    mini.push(0);
    cout << " size --> " << mini.size() << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << "     ";
        mini.pop();
    }
    cout << " khali xa ki xaina " << mini.empty();
    return 0;
}