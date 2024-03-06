#include <iostream>
using namespace std;
long long int SquareRootInteger(int n)
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
double morePrecision( int n,int precision, int tempSoln)
{
    double factor = 1;
    double ans = tempSoln;
    for(int i=0; i<precision;i++)
    {
        factor = factor/10;
        for(double j=ans;j*j<n;j = j + factor)
        {
            ans =j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << " Enter the number " << endl;
    cin >> n;
    int tempSoln = SquareRootInteger(n);
    cout << " Answer is "<< morePrecision(n,3,tempSoln);
    return 0;
}