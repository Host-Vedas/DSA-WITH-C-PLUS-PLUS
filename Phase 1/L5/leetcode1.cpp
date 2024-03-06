// QNo: 1281 level : easy
// link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

#include <iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
      int product=1,sum=0;
      while(n != 0)
      {
        int a=n%10;
        product=product*a;
        sum=sum+a;
        n=n/10;
      }
        int answer;
        answer = product - sum;
        return answer;
    }
};
int main(){
   Solution a,b,c;
   cout<<a.subtractProductAndSum(234)<<endl;
   /*
   product = 2*3*4 = 24
   sum = 9
   output = 24-9 = 15
   */
   cout<<b.subtractProductAndSum(4421)<<endl;
   /*
   product = 4*4*2*1 = 32
   sum = 4 + 4 + 2 + 1 =11
   output = 32 - 11  = 21
   */
   cout<<c.subtractProductAndSum(12345)<<endl;
   /*
   product = 1 * 2 *3 * 4* 5 = 120
   sum = 1 + 2 + 3 + 4 + 5 = 15
   output = 120-15 = 105
   */
return 0;
}
/*
Output:
15
21
105
*/