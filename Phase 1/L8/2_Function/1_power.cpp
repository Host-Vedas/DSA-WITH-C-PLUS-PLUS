#include <iostream>
using namespace std;
int power(int x, int y)
{
    int ans = 1;
    double d;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    // cout << x << " ^ " << y << " = " << ans;
    return ans; // here function return type is integer so we must return integer otherwise we have to encounter warning
}
int main()
{
    int a = 5, b = 5;
    cout << power(a, b);
    return 0;
}