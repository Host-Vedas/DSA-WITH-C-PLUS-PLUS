// leetCode : 69

#include <iostream>
using namespace std;

int main()
{

    return 0;
}

// LeetCode Solution
class Solution
{
public:
    long long int BinarySearch(int n)
    {
        int start = 0;
        int end = (n);
        long long int ans = -1;
        while (start <= end)
        {
            long long int mid = (start + end) / 2;
            long long int square = mid * mid;
            if (square == n)
            {
                return mid;
            }
            else if (square > n)
            {
                end = mid - 1;
            }
            else
            {
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }
    int mySqrt(int x)
    {
        return BinarySearch(x);
    }
};