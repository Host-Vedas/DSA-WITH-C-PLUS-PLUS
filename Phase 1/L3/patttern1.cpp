#include <iostream>
using namespace std;
/*
*****
*****
*****
*****
*****
 */
int main()
{
    int row, n = 1;
    cin >> row;
    while (n <= row)
    {
        int column = 1;
        while (column <= row)
        {
            cout << "*";
            column++;
        }
        cout << endl;
        n++;
    }
    return 0;
}