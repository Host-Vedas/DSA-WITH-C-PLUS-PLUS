#include <iostream>
#include <vector>
using namespace std;
char toLower(char ch)
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
int getLength(char charArr[])
{
    int count = 0;
    for (int i = 0; charArr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool palindrome(char charArr[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        if (toLower(charArr[start]) != toLower(charArr[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
            /*
            Noot valid :-
            start = start++;
            end = end--;
            */
        }
    }
    return true;
}
int main()
{
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;

    cout << "Your name is ";
    int length_Of_String = getLength(name);
    cout << "length_of_string " << length_Of_String << endl;
    cout << name << endl;
    cout << "Palindrome or not " << palindrome(name, length_Of_String) << endl;
    return 0;
}