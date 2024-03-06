// do once again
//   https://leetcode.com/problems/valid-palindrome/
#include <iostream>
using namespace std;
class Solution
{
private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 0 && ch <= 9))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
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
    bool check_palindrome(string s)
    {
        int start = 0;
        int end = s.length() - 1;
        while (start <= end)
        {
            if (s[start] != s[end])
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

public:
    bool isPalindrome(string s)
    {
        // faltu character hatao
        string temp = "";
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }
        // convert to lowercase
        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = tolower(temp[j]);
        }
        int size = temp.length();
        return check_palindrome(temp);
    }
};
int main()
{

    return 0;
}