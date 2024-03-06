// link : https://leetcode.com/problems/reverse-integer/

#include <iostream>
using namespace std;
int main(){
    cout<< "HEllo";
    /*
    There will be a nornal case and a exceptional case.
    */
return 0;
}
class Solution {
public:
    int reverse(int x) {
        int ans =0;
        while( x != 0){
        int digit= (x%10);
        if((ans > (INT_MAX/10)) || (ans< (INT_MIN/10) ) )
        {
            return 0;
        }
        ans = ans*10+digit;
        x = x / 10;
    }
    return ans;
    }
};