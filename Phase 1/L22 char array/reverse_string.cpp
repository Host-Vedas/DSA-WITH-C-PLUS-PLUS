#include <iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}
int main()
{
    char name[20];
    cout << "enter your name " << endl;
    cin >> name;
    int length = getLength(name);
    reverse(name, length);
    cout << name;
    return 0;
}