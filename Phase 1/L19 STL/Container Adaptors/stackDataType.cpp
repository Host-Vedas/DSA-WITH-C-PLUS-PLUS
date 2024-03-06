#include <iostream>
#include <stack>
// last in first out
using namespace std;

int main()
{
    stack<string> My_variable;
    My_variable.push("love");
    My_variable.push("Babbar");
    My_variable.push("Kumara");
    My_variable.push("Redragon");
    cout << " Top Element " << My_variable.top() << endl;
    My_variable.pop();
    cout << " Top Element " << My_variable.top() << endl;
    cout << " size of stack " << My_variable.size() << endl;
    cout << " Empty or not " << My_variable.empty() << endl;
    return 0;
}