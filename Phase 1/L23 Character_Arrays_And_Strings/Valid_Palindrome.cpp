// remove faltu character
// convert all to lower case
// check palindrome
/*
valid character
A-Z
a-z
0-9
*/
#include <iostream>
using namespace std;
class Solution
{
private:
    bool valid(char ch)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= 0 && ch <= 9)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    char toLowerCase(char ch)
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
    bool palindrome(string str)
    {
        int start = 0;
        int end = str.length() -1;
        while (start <= end)
        {
            if (str[start] != str[end])
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

public:
    bool isPalindrome(string s)
    {
        // faltu characyer hatao
        string temp = " ";
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }
        // convert to lower
        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = toLowerCase(temp[j]);
        }

        // check palindrome
        return palindrome(temp);
    }
};
int main()
{
    return 0;
}