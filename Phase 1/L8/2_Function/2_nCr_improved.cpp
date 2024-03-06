#include <iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{

    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int answer = numerator / denominator;
    return answer;
}
int main()
{
    cout << nCr(1, 2) << endl;
    cout << nCr(9, 7) << endl;
    cout << nCr(13, 6) << endl;// integer cannot store 13! so due to garbage value we gaet error
    cout<< " nCr(13, 6) have produced garbage value"<<endl;
    cout << nCr(10, 5) << endl;
    return 0;
}