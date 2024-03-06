#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " Enter the first number " << endl;
    cin >> a;
    cout << " Enter the second number " << endl;
    cin >> b;
    char operation;
    cout << " Enter the operation +,-,*,/ " << endl;
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
        break;
    case '-':
        cout << "Difference of " << a << " and " << b << " is " << a - b << endl;
        break;
    case '*':
        cout << "Product of " << a << " and " << b << " is " << a * b << endl;
        break;
    case '/':
        cout << "Quotient of " << a << " / " << b << " is " << a / b << endl;
        cout << "Remainder of " << a << " / " << b << " is " << a % b << endl;
        break;

    default:
        cout << " Invalid operation " << endl;
        break;
    }

    return 0;
}