#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
    // or
    // return e;
}
int main()
{
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
    int array[5] = {3, 8, 10, 17, 1};
    cout << "Pivot is " << getPivot(array, 5) << endl;
    return 0;
}