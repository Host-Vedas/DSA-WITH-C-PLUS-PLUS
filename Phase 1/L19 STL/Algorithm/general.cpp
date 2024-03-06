#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a = 7, b = 8;
    cout << "max -> " << max(a, b);
    cout << " BEfore swap " << endl;
    cout << " a -> " << a;
    cout << " b -> " << b;
    cout << "min -> " << min(a, b);
    swap(a, b);
    cout << " After swap " << endl;
    cout << " a -> " << a;
    cout << " b -> " << b;

    string Str_Var = "My name is khan";
    reverse(Str_Var.begin(), Str_Var.end());
    // reverse is uder algorithm
    cout << " Str_Var -> " << Str_Var << endl;
    rotate(Str_Var.begin(), Str_Var.begin() + 1, Str_Var.end());
    for (auto i : Str_Var)
    {
        cout << i << "      ";
    }
    cout << endl;
    return 0;
}