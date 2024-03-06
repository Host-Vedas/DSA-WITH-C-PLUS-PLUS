// level : easy
// link : https://leetcode.com/problems/complement-of-base-10-integer/
#include <iostream>
using namespace std;
int main()
{

    //  Take care of 0 as here zero( 0 ) is the exceptional case;
    return 0;
}

// MY first approach, as i did not care about zero;
/*
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int m = n;
        int mask = 0;
            while (m != 0)
            {
                mask = (mask << 1) | 1;
                m = m >> 1;
            }
            if ( n == 0 )           //Here i address error due to zero;
        {
           mask = ( mask << 1) | 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};
*/


//  Initially i found it most optimized
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int m = n;
        int mask = 0;
        if (n == 0)
        {
            mask = (mask << 1) | 1;
            // or
            // return 1;
        }
        else
        {
            while (m != 0)
            {
                mask = (mask << 1) | 1;
                m = m >> 1;
            }
        }
        int ans = (~n) & mask;
        return ans;
    }
};