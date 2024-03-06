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
int main()
{
    char Nam_Hain[50] = "sabnanm";
    cout << getLength(Nam_Hain);
    return 0;
}