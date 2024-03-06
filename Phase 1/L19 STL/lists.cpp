#include <iostream>
#include <list>
// double link list, it have front and back pointer
using namespace std;
int main()
{
    list<int> l;
    l.push_back(4);
    l.push_back(8);
    l.push_back(12);
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    for (int i : l)
    {
        cout << i << "      ";
    }
    cout << endl;
    cout << " after pop " << endl;
    l.pop_back();
    l.pop_front();
    for (auto i : l)
    {
        cout << i << "      ";
    }

    cout << endl;
    l.erase(l.begin());
    cout << "after erase " << endl;
    for (int i : l)
    {
        cout << i << "      ";
    }
    cout << "size of list " << l.size() << endl;

    cout << " copying existing list in a new list " << endl;
    list<int> n(l);
    for (auto i : n)
    {
        cout << i << "      ";
    }
    cout << " Initilizing all block of list with a constan value " << endl;
    // We have created a array New_list of size 8, and initilized all the block with 708 integer;
    list<int> new_list(8, 708);
    for (int i : new_list)
    {
        cout << i << "      ";
    }

    return 0;
}