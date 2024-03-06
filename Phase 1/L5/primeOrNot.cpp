#include <iostream>
using namespace std;
int main()
{
    int Number_To_Be_Checked;
    cout << "Enter the number to be checked for whether it is prime or not";
    cin >> Number_To_Be_Checked;
    bool isPrime = 1;
    for (int i = 2; i < Number_To_Be_Checked; i++)
    {
        if (Number_To_Be_Checked % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Number is not prime" << endl;
    }
    else
    {
        cout << "Number is  prime" << endl;
    }

    return 0;
}