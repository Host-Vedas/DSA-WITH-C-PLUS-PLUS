#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> NUMBER;
    NUMBER.insert(10);
    NUMBER.insert(30);
    NUMBER.insert(20);
    NUMBER.insert(40);
    NUMBER.insert(10);
    // in set although there is large same element but there is one single representation
    for (auto i : NUMBER)
    {
        cout << i << "      ";
    }
    cout << endl;
    NUMBER.erase(NUMBER.begin());
    for (auto i : NUMBER)
    {
        cout << i << "      ";
    }
    cout << endl;
    // NUMBER.erase(NUMBER.begin(),2);    it is generating error
    set<int>::iterator it = NUMBER.begin();
    it++;
    NUMBER.erase(it);
    for (auto i : NUMBER)
    {
        cout << i << "      ";
    }
    cout << endl;
    cout << "Count bale vaiya chek karo ki 5 set mai hai ki nahi --> ";
    cout << NUMBER.count(5) << endl;
    cout << "Count bale vaiya chek karo ki 40 set mai hai ki nahi --> ";
    cout << NUMBER.count(40) << endl;
     set<int>::iterator itr = NUMBER.find(40);
     cout << "value present at itr --> " << *it <<endl;
    return 0;
}