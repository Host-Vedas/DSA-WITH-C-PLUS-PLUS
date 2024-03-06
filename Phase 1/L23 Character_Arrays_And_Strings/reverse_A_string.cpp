#include <iostream>
using namespace std;
void reverseString(char characterArray[], int StringLength)
{
    int start = 0;
    int end = StringLength - 1;
    while (start < end)
    {
        swap(characterArray[start++], characterArray[end--]);
    }
}
int StringLength(char characterArray[])
{
    int count = 0;
    for (int i = 0; characterArray[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    /*
    i/p --> babbar
    o/p --> rabbab
    */
    char name[20];
    cout << "Enter name : ";
    cin >> name;
    cout << " Your entered name i.e string is :-->   " << name << endl;
    int length = StringLength(name);
    reverseString(name, length);
    cout << " Your entered strings' reverse order is " << name << endl;
    return 0;
}