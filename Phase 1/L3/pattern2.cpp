#include <iostream>
using namespace std;
/*

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
            cout << n;
            /*
 11111
 22222
 33333
 44444
 55555
            */
                                                                // cout<<row;
            /*
55555
55555
55555
55555
55555
            */
                                                                // cout<<column;
            /*
12345
12345
12345
12345
12345
            */
            column++;
        }
        cout << endl;
        n++;
    }
    return 0;
}