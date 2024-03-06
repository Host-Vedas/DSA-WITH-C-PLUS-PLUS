// linK : https://leetcode.com/problems/power-of-two/description/
// level : easy
#include <iostream>
// for pow function
#include<math.h>
using namespace std;
int main(){
    
return 0;
}
// solution 1
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for( int i=0 ; i <= 30 ; i++)
        {
            if(n == pow(2,i))
            {
                return true;
            }
        }
        return false;
    }
};

// solution 2
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for( int i=1 ; i <= 31 ; i++)
        {
           if( n == ans){
               return true;
           }
           if ( ans < INT_MAX/2 ) //Take care of this exception, int cannot store more than 2^31 - 1 , so we can face error
            ans = ans * 2;
        }
        return false;
    }
};
// solution 3
/*
check set bit of the given number if set bit =1 then it is power of 2
1=1
2=10
4=100
8=1000
16=10000
*/