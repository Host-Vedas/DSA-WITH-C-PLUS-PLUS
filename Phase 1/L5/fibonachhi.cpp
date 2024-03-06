#include <iostream>
using namespace std;
int main()
{
    //  We have to find first n fibonachhi no
    int a = 0, b = 1, n;
    cin >> n;
    cout << a << " , " << b;
    for (int i = 0; i < n; i++)
    {
        int nextNumber = a + b;
        cout << " , " << nextNumber;
        a = b;
        b = nextNumber;
    }

    return 0;
}
/*
n = 10
0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89
*/