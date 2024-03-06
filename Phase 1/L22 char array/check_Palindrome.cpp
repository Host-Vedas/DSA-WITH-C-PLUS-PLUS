#include <iostream>
#include <vector>
using namespace std;
char tolowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';

        return temp;
    }
}
bool check_palindrome(char myString[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        if (tolowerCase(myString[start]) != tolowerCase(myString[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
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
    /* string which is same on reversing is palindrome
    e.g Noon =nooN
        Tata = ataT  (not palindrom)
    */
    char InputString[25];
    cin >> InputString;
    int length = getLength(InputString);
    cout << " Palindrome or not " << check_palindrome(InputString, length);

    return 0;
}