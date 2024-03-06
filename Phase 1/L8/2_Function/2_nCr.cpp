#include <iostream>
using namespace std;
void nCr(int n, int r)
{
    if (r > n)
    {
        cout << " Invalid input " << endl;
    }
    // for numerator i.e n!
    int nStore = n;
    int numerator = 1;
    for (int i = n; n > 0; n--)
    {
        numerator = numerator * n;
    }
    // for denominator i.e r! * (n-r)!
    int den1 = 1;
    int rStore = r;
    for (int i = r; r > 0; r--)
    {
        den1 = den1 * r;
    }
    int den2 = 1;
    int x = (nStore - rStore);
    for (int i = x; x > 0; x--)
    {
        den2 = den2 * x;
    }
    int denominator = den1 * den2;
    cout << "Your answer in fraction =         " << numerator << " / (" << den1 << " * " << den2 << ")" << endl;
    cout << "i.e" << numerator << " / " << denominator << endl;
    double ans = numerator / denominator;
    cout << ans << endl;
    cout << "____________________________________________________________________________________________" << endl;
}
int main()
{
    cout<<"nCr(0, 0);"<<endl;
    nCr(0, 0);
    cout<<"nCr(01, 2)"<<endl;
    nCr(01, 2);
    cout<<"nCr(10, 8)"<<endl;
    nCr(10, 8);
    cout<<"nCr(9, 7);"<<endl;
    nCr(9, 7);
    return 0;
}